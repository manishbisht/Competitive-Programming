var getParentNodeAndDepth = function (root, value, result) {
    if (!root) {
        return null;
    }

    if (root.val == value) {
        return result;
    }

    const newResult = { ...result };
    newResult.parent = root;
    newResult.depth += 1;

    const leftNode = getParentNodeAndDepth(root.left, value, newResult);
    if (leftNode) return leftNode;

    const rightNode = getParentNodeAndDepth(root.right, value, newResult);
    if (rightNode) return rightNode;
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
 * @param {number} x
 * @param {number} y
 * @return {boolean}
 */
var isCousins = function (root, x, y) {
    const nodeOne = getParentNodeAndDepth(root, x, { depth: 0, parent: root });
    const nodeTwo = getParentNodeAndDepth(root, y, { depth: 0, parent: root });
    return nodeOne.depth === nodeTwo.depth && nodeOne.parent.val != nodeTwo.parent.val;
};
