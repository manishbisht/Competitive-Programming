/**
 * https://leetcode.com/problems/validate-binary-search-tree/
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {boolean}
 */
var isValidBST = function (root) {
    return solve(root, -Math.pow(2, 32), Math.pow(2, 32));
};

const solve = (root, left, right) => {
    if (root) {
        if (left >= root.val || root.val >= right) {
            return false;
        }

        return solve(root.left, left, root.val) && solve(root.right, root.val, right);
    }

    return true;
};
