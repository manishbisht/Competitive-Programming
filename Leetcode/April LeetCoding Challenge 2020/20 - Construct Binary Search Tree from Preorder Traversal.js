/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {number[]} preorder
 * @return {TreeNode}
 */
var bstFromPreorder = function (preorder) {
    if (preorder.length == 0) {
        return null;
    }

    let root = new TreeNode(preorder[0]);
    let stack = [];
    stack.push(root);

    for (let i = 1; i < preorder.length; i++) {
        const current = new TreeNode(preorder[i]);
        let top = stack[stack.length - 1];

        while (stack.length != 0 && stack[stack.length - 1].val < preorder[i]) {
            top = stack.pop();
        }

        if (top.val < preorder[i]) {
            top.right = current;
        } else {
            top.left = current;
        }

        stack.push(current);
    }
    return root;
};
