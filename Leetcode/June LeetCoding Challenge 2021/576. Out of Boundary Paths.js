/**
 * https://leetcode.com/problems/out-of-boundary-paths/
 * @param {number} m
 * @param {number} n
 * @param {number} maxMove
 * @param {number} startRow
 * @param {number} startColumn
 * @return {number}
 */
var findPaths = function (m, n, maxMove, startRow, startColumn) {
    dp = Array(m + 1)
        .fill()
        .map(() =>
            Array(n + 1)
                .fill()
                .map(() => Array(maxMove + 1).fill())
        );
    return solve(m, n, maxMove, startRow, startColumn);
};

let dp;

const solve = (m, n, maxMove, startRow, startColumn) => {
    if (maxMove < 0) {
        return 0;
    }

    if (startRow === m || startColumn === n || startRow === -1 || startColumn === -1) {
        return 1;
    }

    if (dp[startRow][startColumn][maxMove] !== undefined) {
        return dp[startRow][startColumn][maxMove];
    }

    const left = solve(m, n, maxMove - 1, startRow + 1, startColumn);
    const right = solve(m, n, maxMove - 1, startRow - 1, startColumn);
    const top = solve(m, n, maxMove - 1, startRow, startColumn - 1);
    const bottom = solve(m, n, maxMove - 1, startRow, startColumn + 1);
    const total = (left + right + top + bottom) % 1000000007;
    dp[startRow][startColumn][maxMove] = total;

    return dp[startRow][startColumn][maxMove];
};
