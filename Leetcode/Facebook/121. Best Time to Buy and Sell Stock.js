/**
 * https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
    let ans = 0;
    let minimum = prices[0];
    for (let i = 1; i < prices.length; i++) {
        if (prices[i] < minimum) {
            minimum = prices[i];
        }
        ans = Math.max(ans, prices[i] - minimum);
    }
    return ans;
};
