var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');
var http = require('http')
var bodyParser = require('body-parser');
const basicAuth = require('express-basic-auth');
const router = express.Router();
const bcrypt = require('bcryptjs');
const packageJson = require('./package.json');

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

app.get('/version', (req, res) => {
    return res.send(packageJson.version);
})

app.use('/', indexRouter);
app.use('/users', usersRouter);
app.use("/asiakas", asiakasRouter);
app.use("/kortti", korttiRouter);
app.use("/tili", tiliRouter);
app.use("/tilitapahtumat", tilitapahtumatRouter);

module.exports = app;
