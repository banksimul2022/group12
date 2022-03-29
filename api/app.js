var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');
var http = require('http')
var bodyParser = require('body-parser');
const basicAuth = require('express-basic-auth');


var indexRouter = require('./routes/index');
var usersRouter = require('./routes/users');
var opiskelijaRouter = require('./routes/opiskelija');
var opintojaksoRouter = require('./routes/opintojakso');
var arvosteluRouter = require('./routes/arviointi');


var app = express();
//Kommentti 2
app.use(basicAuth({users: { 'admin': 'moro' }}))
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
app.use("/opiskelijat", opiskelijaRouter);
app.use("/opintojaksot", opintojaksoRouter);
app.use("/arvostelut", arvosteluRouter);

console.log("Starting server");
http.createServer(app).listen(3000);

module.exports = app;
