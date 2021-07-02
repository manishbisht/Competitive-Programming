const mongoose = require('mongoose');
const Schema = mongoose.Schema;

const UserSchema = new Schema({
    EMAIL: {
        type: String,
        unique: true,
        index: true,
        required: true
    },
    PASSWORD: {
        type: String,
        required: true
    },
    FIRST_NAME: {
        type: String,
        required: true
    },
    LAST_NAME: {
        type: String,
        required: true
    }
}, {timestamps: true});

module.exports = mongoose.model('users', UserSchema);