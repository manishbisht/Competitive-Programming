/**
 * https://leetcode.com/problems/diameter-of-binary-tree/
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
var diameterOfBinaryTree = function (root) {
    ans = Number.NEGATIVE_INFINITY;
    solve(root);
    return ans;
};

let ans;

const solve = root => {
    if (root) {
        let left = solve(root.left);
        let right = solve(root.right);
        ans = Math.max(ans, left + right);
        return 1 + Math.max(left, right);
    }

    return 0;
};
