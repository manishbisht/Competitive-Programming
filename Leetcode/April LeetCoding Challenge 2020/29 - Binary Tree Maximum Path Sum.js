var ans = null;

var getMaximum = function (a, b) {
    return a > b ? a : b;
};

var pathSum = function (root) {
    if (!root) {
        return 0;
    }

    let leftSubTreeSum = pathSum(root.left);
    let rightSubTreeSum = pathSum(root.right);

    let maxParent = getMaximum(getMaximum(leftSubTreeSum, rightSubTreeSum) + root.val, root.val);
    let maxBranch = getMaximum(maxParent, leftSubTreeSum + rightSubTreeSum + root.val);

    if (ans) {
        ans = getMaximum(ans, maxBranch);
    } else {
        ans = maxBranch;
    }

    return maxParent;
};

/**
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
    ans = null;

    if (!root) {
        return 0;
    }

    pathSum(root);

    return ans;
};
