var isSafe = function (grid, i, j, visited) {
    return i >= 0 && j >= 0 && i < grid.length && j < grid[0].length && visited[i][j] == 0 && grid[i][j] == 1;
};

var dfs = function (grid, i, j, visited) {
    let rowNumber = [-1, 0, 0, 1];
    let columnNumber = [0, -1, 1, 0];
    visited[i][j] = 1;
    for (let k = 0; k < 8; k++) {
        if (isSafe(grid, i + rowNumber[k], j + columnNumber[k], visited)) {
            dfs(grid, i + rowNumber[k], j + columnNumber[k], visited);
        }
    }
};
/**
 * @param {character[][]} grid
 * @return {number}
 */
var numIslands = function (grid) {
    let visited = Array(grid.length)
        .fill(0)
        .map(() => Array(grid[0].length).fill(0));
    let count = 0;
    for (let i = 0; i < grid.length; i++) {
        for (let j = 0; j < grid[0].length; j++) {
            if (visited[i][j] == 0 && grid[i][j] == 1) {
                dfs(grid, i, j, visited);
                count += 1;
            }
        }
    }
    return count;
};
