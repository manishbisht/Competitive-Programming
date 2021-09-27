/**
 * https://leetcode.com/problems/leftmost-column-with-at-least-a-one/
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * function BinaryMatrix() {
 *     @param {integer} row, col
 *     @return {integer}
 *     this.get = function(row, col) {
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
    let ans = Number.POSITIVE_INFINITY;
    const dimensions = binaryMatrix.dimensions();
    for (let i = 0; i < dimensions[0]; i++) {
        let start = 0;
        let end = dimensions[1] - 1;
        while (start <= end) {
            let mid = start + Math.floor((end - start) / 2);
            const value = binaryMatrix.get(i, mid);
            if (value === 1) {
                ans = Math.min(ans, mid);
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
    }
    return ans === Number.POSITIVE_INFINITY ? -1 : ans;
};
