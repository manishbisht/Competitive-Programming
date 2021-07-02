const mongoose = require('mongoose');
const Follower = mongoose.model('follower');

exports.addFollower = function(req, res) {
    const newFollower = new Follower(req.body);
    newFollower.save(function(err, follower) {
        if (err)
            res.status(400).send(err);
        res.json(follower);
    });
};

exports.deleteFollower = function(req, res) {
    Follower.remove(req.body, function(err, follower) {
        if (err)
            res.status(400).send(err);
        res.json(follower);
    });
};

exports.getAllFollowers = function(req, res) {
    let userId = req.params.userId;
    Follower.find({FOLLOWED_BY: {$eq: userId}}, function(err, followers) {
        if (err)
            res.status(400).send(err);
        res.json(followers);
    });
};