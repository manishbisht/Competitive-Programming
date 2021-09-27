/**
 * https://leetcode.com/problems/maximum-product-difference-between-two-pairs/
 * @param {number[]} nums
 * @return {number}
 */
var maxProductDifference = function (nums) {
    nums.sort((a, b) => a - b);
    return nums[nums.length - 1] * nums[nums.length - 2] - nums[0] * nums[1];
};
