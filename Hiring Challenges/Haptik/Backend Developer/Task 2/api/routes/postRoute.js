module.exports = function (app) {
    const postController = require('../controllers/postController');

    app.route('/post')
        .post(postController.createPost);

    app.route('/posts/:userId')
        .get(postController.getAllPosts);
};