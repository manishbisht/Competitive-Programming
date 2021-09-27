/**
 * https://leetcode.com/problems/number-of-islands/
 * @param {character[][]} grid
 * @return {number}
 */
var numIslands = function (grid) {
    let ans = 0;
    visited = Array(grid.length)
        .fill()
        .map(() => Array(grid[0].length).fill());
    for (let i = 0; i < grid.length; i++) {
        for (let j = 0; j < grid[0].length; j++) {
            if (!visited[i][j] && grid[i][j] === "1") {
                solve(grid, i, j);
                ans++;
            }
        }
    }
    return ans;
};

let visited;

const solve = (grid, row, column) => {
    if (
        row >= 0 &&
        row < grid.length &&
        column >= 0 &&
        column < grid[0].length &&
        !visited[row][column] &&
        grid[row][column] === "1"
    ) {
        visited[row][column] = 1;
        solve(grid, row + 1, column);
        solve(grid, row - 1, column);
        solve(grid, row, column - 1);
        solve(grid, row, column + 1);
    }
};
