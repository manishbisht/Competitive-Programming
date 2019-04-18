module.exports = function (app) {
    const userController = require('../controllers/userController');

    app.route('/signup')
        .post(userController.createAccount);

    app.route('/login')
        .post(userController.checkLogin);

    app.route('/user/:userId')
        .get(userController.getUserDetails);
};