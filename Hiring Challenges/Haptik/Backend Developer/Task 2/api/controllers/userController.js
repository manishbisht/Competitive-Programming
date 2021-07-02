const mongoose = require('mongoose');
const User = mongoose.model('users');

exports.createAccount = function(req, res) {
    const newUser = new User(req.body);
    newUser.save(function(err, user) {
        if (err)
            res.status(400).send(err);
        res.json(user);
    });
};

exports.checkLogin = function(req, res) {
    User.find(req.body, { _id : 1, EMAIL : 1 }, function(err, user) {
        if (err)
            res.status(400).send(err);
        res.json(user);
    });
};

exports.getUserDetails = function(req, res) {
    let userId = req.params.userId;
    User.find({_id: {$eq: userId}}, function(err, user) {
        if (err)
            res.status(400).send(err);
        res.json(user);
    });
};