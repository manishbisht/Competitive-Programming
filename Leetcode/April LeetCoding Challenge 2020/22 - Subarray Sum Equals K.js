/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var subarraySum = function (nums, k) {
    let temp = {};
    let ans = 0;
    let sum = 0;
    temp[0] = 1;
    for (let i = 0; i < nums.length; i++) {
        sum += nums[i];
        if (temp[sum - k]) {
            ans += temp[sum - k];
        }
        if (temp[sum]) {
            temp[sum] += 1;
        } else {
            temp[sum] = 1;
        }
    }
    return ans;
};
