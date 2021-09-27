/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function (nums) {
    let zeroCount = 0;
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] === 0) {
            zeroCount++;
        } else if (zeroCount > 0) {
            nums[i - zeroCount] = [nums[i], (nums[i] = nums[i - zeroCount])][0];
        }
    }
    return nums;
};
