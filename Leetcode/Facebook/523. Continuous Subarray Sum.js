/**
 * https://leetcode.com/problems/continuous-subarray-sum/
 * @param {number[]} nums
 * @param {number} k
 * @return {boolean}
 */
var checkSubarraySum = function (nums, k) {
    let sum = 0;
    const checkMap = {};
    for (let i = 0; i < nums.length; i++) {
        sum += nums[i];
        if (sum % k === 0 || sum === 0) {
            if (i >= 1) {
                return true;
            }
        }
        if (checkMap[sum % k] >= 0) {
            if (i - (checkMap[sum % k] + 1) + 1 > 1) {
                return true;
            }
        } else {
            checkMap[sum % k] = i;
        }
    }
    return false;
};
