/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxLength = function (nums) {
    let countMap = {};
    countMap[0] = -1;
    let maxLength = 0;
    let sum = 0;
    for (let i = 0; i < nums.length; i++) {
        sum += nums[i] == 1 ? 1 : -1;
        if (sum in countMap) {
            maxLength = maxLength > i - countMap[sum] ? maxLength : i - countMap[sum];
        } else {
            countMap[sum] = i;
        }
    }
    return maxLength;
};
