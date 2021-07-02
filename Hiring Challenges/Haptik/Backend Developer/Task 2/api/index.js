const express = require('express');
const bodyParser = require('body-parser');
const mongoose = require('mongoose');
const cors = require('cors');
const app = express();
const port = 5000;

mongoose.Promise = global.Promise;
mongoose.connect('mongodb://localhost/twitter-clone', { useCreateIndex: true, useNewUrlParser: true });

app.use(bodyParser.urlencoded({extended: true}));
app.use(bodyParser.json());
app.use(cors());

const userModal = require("./modals/userModal");
const userRoute = require('./routes/userRoute');
userRoute(app);

const followerModal = require("./modals/followerModal");
const followerRoute = require('./routes/followerRoute');
followerRoute(app);

const postModal = require("./modals/postModal");
const postRoute = require('./routes/postRoute');
postRoute(app);

app.listen(port, () => console.log(`Example app listening on port ${port}!`));