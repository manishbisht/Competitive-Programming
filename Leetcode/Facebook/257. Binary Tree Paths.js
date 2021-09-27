/**
 * https://leetcode.com/problems/binary-tree-paths/
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {string[]}
 */
var binaryTreePaths = function (root) {
    ans = [];
    solve(root, "");
    return ans;
};

let ans;

const solve = (root, path) => {
    if (root) {
        path += root.val;

        if (!root.left && !root.right) {
            ans.push(path);
            return;
        }

        path += "->";
        solve(root.left, path);
        solve(root.right, path);
    }
};
