/**
 * https://leetcode.com/problems/binary-tree-right-side-view/
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
var rightSideView = function (root) {
    return bfs(root, 0, []);
};

const bfs = (root, height, ans) => {
    if (root) {
        if (ans.length === height) ans.push(root.val);

        bfs(root.right, height + 1, ans);
        bfs(root.left, height + 1, ans);

        return ans;
    }

    return ans;
};
