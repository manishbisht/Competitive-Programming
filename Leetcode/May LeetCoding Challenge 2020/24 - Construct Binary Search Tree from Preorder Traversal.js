var createNode = function (root, value) {
    if (root) {
        if (value > root.val) {
            if (root.right) {
                createNode(root.right, value);
            } else {
                root.right = new TreeNode(value);
            }
        } else {
            if (root.left) {
                createNode(root.left, value);
            } else {
                root.left = new TreeNode(value);
            }
        }
    }
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
 * @param {number[]} preorder
 * @return {TreeNode}
 */
var bstFromPreorder = function (preorder) {
    let root = new TreeNode(preorder[0]);
    for (let i = 1; i < preorder.length; i++) {
        createNode(root, preorder[i]);
    }
    return root;
};
