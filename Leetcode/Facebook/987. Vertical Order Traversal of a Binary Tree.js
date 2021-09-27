/**
 * https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[][]}
 */
var verticalTraversal = function (root) {
    let ans = dfs(
        root,
        0,
        1005,
        Array(2010)
            .fill()
            .map(() => [])
    )
        .filter(item => item.length)
        .map(item => {
            item.sort((a, b) => (a[0] === b[0] ? a[1] - b[1] : a[0] - b[0]));
            return item.map(a => a[1]);
        });
    return ans;
};

const dfs = (root, row, column, ans) => {
    if (root) {
        ans[column].push([row, root.val]);
        ans = dfs(root.left, row + 1, column - 1, ans);
        ans = dfs(root.right, row + 1, column + 1, ans);
    }

    return ans;
};
