var maximum = function (a, b) {
    return a > b ? a : b;
};
/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function (nums) {
    let result = nums[0];
    let maxTillNow = nums[0];
    for (let i = 1; i < nums.length; i++) {
        maxTillNow = maximum(nums[i], maxTillNow + nums[i]);
        result = maximum(result, maxTillNow);
    }
    return result;
};
