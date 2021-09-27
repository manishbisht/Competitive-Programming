/**
 * https://leetcode.com/problems/flatten-binary-tree-to-linked-list/
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {void} Do not return anything, modify root in-place instead.
 */
var flatten = function (root) {
    prev = null;
    solve(root);
    return root;
};

let prev;

const solve = root => {
    if (root) {
        solve(root.right);
        solve(root.left);

        root.right = prev;
        root.left = null;
        prev = root;
    }
};
