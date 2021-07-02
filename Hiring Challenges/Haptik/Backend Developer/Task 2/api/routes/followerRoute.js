module.exports = function (app) {
    const followerController = require('../controllers/followerController');

    app.route('/follower/:userId')
        .get(followerController.getAllFollowers)
        .post(followerController.addFollower)
        .delete(followerController.deleteFollower)
};