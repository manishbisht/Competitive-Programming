/**
 * @param {character[][]} matrix
 * @return {number}
 */
var maximalSquare = function (matrix) {
    if (matrix.length == 0) {
        return 0;
    }

    let dp = Array(matrix.length)
        .fill(0)
        .map(() => Array(matrix[0].length).fill(0));
    let result = 0;
    for (let i = 0; i < matrix.length; i++) {
        dp[i][0] = matrix[i][0] - 0;
        result = result > dp[i][0] ? result : dp[i][0];
    }

    for (let i = 0; i < matrix[0].length; i++) {
        dp[0][i] = matrix[0][i] - 0;
        result = result > dp[0][i] ? result : dp[0][i];
    }

    for (let i = 1; i < matrix.length; i++) {
        for (let j = 1; j < matrix[0].length; j++) {
            if (matrix[i][j] == 1) {
                let min = dp[i - 1][j] < dp[i][j - 1] ? dp[i - 1][j] : dp[i][j - 1];
                min = min < dp[i - 1][j - 1] ? min : dp[i - 1][j - 1];
                dp[i][j] = min + 1;
                result = result > dp[i][j] ? result : dp[i][j];
            } else {
                dp[i][j] = 0;
            }
        }
    }

    return result * result;
};
