/**
 * https://leetcode.com/problems/maximum-alternating-subsequence-sum/
 * @param {number[]} nums
 * @return {number}
 */
var maxAlternatingSum = function (nums) {
    dp = {
        1: {},
        "-1": {},
    };
    return solve(nums, 0, 1);
};

let dp = {};

const solve = (nums, index, sign) => {
    if (dp[sign][index]) return dp[sign][index];

    if (index < nums.length) {
        let ans = Math.max(nums[index] * sign + solve(nums, index + 1, sign * -1), solve(nums, index + 1, sign));
        dp[sign][index] = ans;
        return ans;
    }

    return 0;
};
