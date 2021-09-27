/**
 * https://leetcode.com/problems/buildings-with-an-ocean-view/
 * @param {number[]} heights
 * @return {number[]}
 */
var findBuildings = function (heights) {
    let ans = [heights.length - 1];
    let maximumTillNow = heights[heights.length - 1];
    for (let i = heights.length - 1; i >= 0; i--) {
        if (maximumTillNow < heights[i]) {
            maximumTillNow = heights[i];
            ans.push(i);
        }
    }
    ans.sort((a, b) => a - b);
    return ans;
};
