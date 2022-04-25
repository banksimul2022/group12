var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');
var http = require('http')
var bodyParser = require('body-parser');
const basicAuth = require('express-basic-auth');
const jwt = require('jsonwebtoken');
const router = express.Router();
const bcrypt = require('bcryptjs');
const login = require('../models/login_model');
const dotenv = require('dotenv');


var indexRouter = require('./routes/index');
var usersRouter = require('./routes/users');
var asiakasRouter = require('./routes/asiakas');
var korttiRouter = require('./routes/kortti');
var tiliRouter = require('./routes/tili');
var tilitapahtumatRouter = require('./routes/tilitapahtumat');


var app = express();

app.use(basicAuth({users: { 'admin': 'salasana' }}))
app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));
// parse application/x-www-form-urlencoded
app.use(bodyParser.urlencoded({ extended: false }))

// parse application/json
app.use(bodyParser.json())
app.use('/', indexRouter);
app.use('/users', usersRouter);
app.use("/asiakas", asiakasRouter);
app.use("/kortti", korttiRouter);
app.use("/tili", tiliRouter);
app.use("/tilitapahtumat", tilitapahtumatRouter);


function authenticateToken(req, res, next) {
    const authHeader = req.headers['authorization']
    const token = authHeader && authHeader.split(' ')[1]
  
    console.log("token = "+token);
    if (token == null) return res.sendStatus(401)
  
    jwt.verify(token, process.env.MY_TOKEN, (err, user) => {
      console.log(err)
  
      if (err) return res.sendStatus(403)
  
      req.user = user
  
      next()
    })
  }

  app.use('/login', loginRouter);//login is not protected 

  app.use(authenticateToken);
  
  app.use('/book', bookRouter);//book is protected

 

router.post('/', 
  function(request, response) {
    if(request.body.username && request.body.password){
      const user = request.body.username;
      const pass = request.body.password;
      
        login.checkPassword(user, function(dbError, dbResult) {
          if(dbError){
            response.json(dbError);
          }
          else{
            if (dbResult.length > 0) {
              bcrypt.compare(pass,dbResult[0].password, function(err,compareResult) {
                if(compareResult) {
                  console.log("succes");
                  const token = generateAccessToken({ username: user });
                  response.send(token);
                }
                else {
                    console.log("wrong password");
                    response.send(false);
                }			
              }
              );
            }
            else{
              console.log("user does not exists");
              response.send(false);
            }
          }
          }
        );
      }
    else{
      console.log("username or password missing");
      response.send(false);
    }
  }
);

function generateAccessToken(username) {
  dotenv.config();
  return jwt.sign(username, process.env.MY_TOKEN, { expiresIn: '1800s' });
}

module.exports=router;

module.exports = app;
