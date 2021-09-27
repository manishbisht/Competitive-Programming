var count, ans;
var inOrderTraversal = function (root) {
    if (root == null) {
        return;
    }
    if (root.left) {
        inOrderTraversal(root.left);
    }

    count -= 1;

    if (count == 0) {
        ans = root.val;
    }

    if (root.right) {
        inOrderTraversal(root.right);
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
 * @param {TreeNode} root
 * @param {number} k
 * @return {number}
 */
var kthSmallest = function (root, k) {
    count = k;
    inOrderTraversal(root);
    return ans;
};
