/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function (nums) {
    result = 0;
    for (let i = 0; i < nums.length; i++) {
        result ^= nums[i];
    }
    return result;
};
