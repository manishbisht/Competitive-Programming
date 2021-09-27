/**
 * https://leetcode.com/problems/find-largest-value-in-each-tree-row/
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[]}
 */
var largestValues = function (root) {
    ans = [];
    solve(root, 0);
    return ans;
};

let ans;

const solve = (root, height) => {
    if (root) {
        if (ans.length <= height) {
            ans.push(root.val);
        } else {
            ans[height] = Math.max(ans[height], root.val);
        }
        solve(root.left, height + 1);
        solve(root.right, height + 1);
    }

    return height;
};
