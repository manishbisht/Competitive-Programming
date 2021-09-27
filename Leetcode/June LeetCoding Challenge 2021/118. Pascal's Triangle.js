/**
 * https://leetcode.com/problems/pascals-triangle/
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function (numRows) {
    let ans = [];
    for (let i = 0; i < numRows; i++) {
        if (i === 0) {
            ans.push([1]);
        } else {
            let item = [1];
            for (let j = 1; j < ans[i - 1].length; j++) {
                item.push(ans[i - 1][j - 1] + ans[i - 1][j]);
            }
            item.push(1);
            ans.push(item);
        }
    }
    return ans;
};
