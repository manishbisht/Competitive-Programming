/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * function BinaryMatrix() {
 *     @param {integer} x, y
 *     @return {integer}
 *     this.get = function(x, y) {
 *         ...
 *     };
 *
 *     @return {[integer, integer]}
 *     this.dimensions = function() {
 *         ...
 *     };
 * };
 */

/**
 * @param {BinaryMatrix} binaryMatrix
 * @return {number}
 */
var leftMostColumnWithOne = function (binaryMatrix) {
    let matrixOrder = binaryMatrix.dimensions();
    let ans = -1;
    for (let i = 0; i < matrixOrder[0]; i++) {
        for (let j = ans == -1 ? matrixOrder[1] - 1 : ans - 1; j >= 0; j--) {
            if (binaryMatrix.get(i, j) == 0) {
                break;
            } else {
                ans = j;
            }
        }
    }
    return ans;
};
