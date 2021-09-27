/**
 * https://leetcode.com/problems/binary-tree-vertical-order-traversal/
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
var verticalOrder = function (root) {
    ansArray = dfs(
        root,
        0,
        10,
        Array(20)
            .fill()
            .map(() => [])
    ).filter(item => item.length);
    ansArray.forEach(array => array.sort((a, b) => a[0] - b[0]));
    return ansArray.map(array => array.map(item => item[1]));
};

const dfs = (root, row, column, ans) => {
    if (root) {
        ans[column] = [...ans[column], [row, root.val]];
        dfs(root.left, row + 1, column - 1, ans);
        dfs(root.right, row + 1, column + 1, ans);
    }

    return ans;
};
