/**
 * https://leetcode.com/problems/range-sum-query-2d-immutable/
 * @param {number[][]} matrix
 */
var NumMatrix = function (matrix) {
    this.dp = Array(matrix.length)
        .fill()
        .map(() => Array(matrix[0].length).fill(0));
    let sum = 0;
    for (let i = 0; i < matrix.length; i++) {
        sum = 0;
        for (let j = 0; j < matrix[0].length; j++) {
            sum += matrix[i][j];
            this.dp[i][j] = (this.dp[i - 1]?.[j] || 0) + sum;
        }
    }
};

/**
 * @param {number} row1
 * @param {number} col1
 * @param {number} row2
 * @param {number} col2
 * @return {number}
 */
NumMatrix.prototype.sumRegion = function (row1, col1, row2, col2) {
    return (
        this.dp[row2][col2] -
        (this.dp[row1 - 1]?.[col2] || 0) -
        (this.dp[row2]?.[col1 - 1] || 0) +
        (this.dp[row1 - 1]?.[col1 - 1] || 0)
    );
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * var obj = new NumMatrix(matrix)
 * var param_1 = obj.sumRegion(row1,col1,row2,col2)
 */
