/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function (nums) {
    let result = [1];
    for (let i = 1; i < nums.length; i++) {
        result.push(nums[i - 1] * result[i - 1]);
    }
    let rightProduct = 1;
    for (let i = nums.length; i > 0; i--) {
        result[i - 1] *= rightProduct;
        rightProduct *= nums[i - 1];
    }
    return result;
};
