/**
 * https://leetcode.com/problems/binary-tree-maximum-path-sum/
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
var maxPathSum = function (root) {
    ans = Number.NEGATIVE_INFINITY;
    solve(root, 0);
    return ans;
};

let ans;

const solve = (root, sum) => {
    if (root) {
        let leftSum = Math.max(solve(root.left, 0), 0);
        let rightSum = Math.max(solve(root.right, 0), 0);

        ans = Math.max(ans, leftSum + root.val + rightSum);

        return root.val + Math.max(leftSum, rightSum);
    }

    return sum;
};
