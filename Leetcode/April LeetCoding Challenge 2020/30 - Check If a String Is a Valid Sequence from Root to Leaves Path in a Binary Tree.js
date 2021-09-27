var pathExists = function (root, arr, index) {
    if (!root) {
        return arr.length == 0;
    }

    if (!root.left && !root.right && root.val == arr[index] && index == arr.length - 1) {
        return true;
    }

    return (
        index < arr.length &&
        root.val == arr[index] &&
        (pathExists(root.left, arr, index + 1) || pathExists(root.right, arr, index + 1))
    );
};
/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @param {number[]} arr
 * @return {boolean}
 */
var isValidSequence = function (root, arr) {
    return pathExists(root, arr, 0) || false;
};
