/**
 * @param {number[][]} grid
 * @return {number}
 */
var minPathSum = function (grid) {
    let dp = Array(grid.length)
        .fill(0)
        .map(() => Array(grid[0].length).fill(0));
    dp[0][0] = grid[0][0];
    for (let i = 0; i < grid.length; i++) {
        if (i > 0) {
            dp[i][0] = dp[i - 1][0] + grid[i][0];
        }
        for (let j = 1; j < grid[0].length; j++) {
            if (i == 0 && j > 0) {
                dp[i][j] = dp[i][j - 1] + grid[i][j];
            } else {
                dp[i][j] =
                    dp[i][j - 1] + grid[i][j] < dp[i - 1][j] + grid[i][j]
                        ? dp[i][j - 1] + grid[i][j]
                        : dp[i - 1][j] + grid[i][j];
            }
        }
    }
    return dp[grid.length - 1][grid[0].length - 1];
};
