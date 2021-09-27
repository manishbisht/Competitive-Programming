/**
 * https://leetcode.com/problems/closest-binary-search-tree-value/
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @param {number} target
 * @return {number}
 */
var closestValue = function (root, target) {
    return dfs(root, target, root.val);
};

const dfs = (root, target, ans) => {
    if (root) {
        if (Math.abs(ans - target) > Math.abs(root.val - target)) ans = root.val;
        ans = dfs(root.left, target, ans);
        ans = dfs(root.right, target, ans);
        return ans;
    }

    return ans;
};
