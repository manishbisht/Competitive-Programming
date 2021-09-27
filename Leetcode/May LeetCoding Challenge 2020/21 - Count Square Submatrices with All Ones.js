/**
 * @param {number[][]} matrix
 * @return {number}
 */
var countSquares = function (matrix) {
    if (!matrix || matrix.length == 0) {
        return 0;
    }

    let ans = 0;

    for (let i = 0; i < matrix.length; i++) {
        for (let j = 0; j < matrix[0].length; j++) {
            if (matrix[i][j] === 1) {
                if (i == 0 || j == 0) {
                    ans += 1;
                } else {
                    let value = Math.min(matrix[i - 1][j - 1], matrix[i][j - 1], matrix[i - 1][j]) + matrix[i][j];
                    ans += value;
                    matrix[i][j] = value;
                }
            }
        }
    }

    return ans;
};
