/**
 * https://leetcode.com/problems/two-sum-less-than-k/
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var twoSumLessThanK = function (nums, k) {
    nums.sort((a, b) => a - b);
    let ans = -1;
    let start = 0;
    let end = nums.length - 1;
    while (start < end) {
        if (nums[start] + nums[end] < k) {
            ans = Math.max(ans, nums[start] + nums[end]);
            start++;
        } else {
            end--;
        }
    }
    return ans;
};
