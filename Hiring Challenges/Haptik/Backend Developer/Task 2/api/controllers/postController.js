const mongoose = require('mongoose');
const Post = mongoose.model('posts');
const Follower = mongoose.model('follower');

exports.createPost = function(req, res) {
    const newPost = new Post(req.body);
    newPost.save(function(err, user) {
        if (err)
            res.status(400).send(err);
        res.json(user);
    });
};

exports.getAllPosts = function(req, res) {
    let userId = req.params.userId;
    Follower.find({FOLLOWED_BY: {$eq: userId}}, function(err, followers) {
        if (err)
            res.status(400).send(err);
        let userIds = followers.map((follower) => {
            return follower["FOLLOWED_TO"];
        });
        userIds.push(userId);
        Post.find({AUTHOR: {$in: userIds}}, null, {sort: {updatedAt: -1}}, function(err, posts) {
            if (err)
                res.status(400).send(err);
            res.json(posts);
        });
    });
};