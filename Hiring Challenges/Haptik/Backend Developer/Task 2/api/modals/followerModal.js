const mongoose = require('mongoose');
const Schema = mongoose.Schema;

const FollowerSchema = new Schema({
    FOLLOWED_BY: {
        type: Schema.ObjectId,
        required: true
    },
    FOLLOWED_TO: {
        type: Schema.ObjectId,
        required: true
    },
}, {timestamps: true});

module.exports = mongoose.model('follower', FollowerSchema);