/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
var result;
var treeHeight = function (root) {
    if (root == null) {
        return 0;
    }

    let leftHeight = treeHeight(root.left);
    let rightHeight = treeHeight(root.right);

    result = result > leftHeight + rightHeight + 1 ? result : leftHeight + rightHeight + 1;

    return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
};

/**
 * @param {TreeNode} root
 * @return {number}
 */
var diameterOfBinaryTree = function (root) {
    result = 1;
    treeHeight(root);
    return result - 1;
};
