const mongoose = require('mongoose');
const Schema = mongoose.Schema;

const PostSchema = new Schema({
    CONTENT: {
        type: String,
        maxlength: 140,
        required: true
    },
    AUTHOR: {
        type: Schema.ObjectId,
        required: true
    },
}, {timestamps: true});

module.exports = mongoose.model('posts', PostSchema);