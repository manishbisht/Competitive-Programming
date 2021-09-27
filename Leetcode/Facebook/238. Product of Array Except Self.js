/**
 * https://leetcode.com/problems/product-of-array-except-self/
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function (nums) {
    let zeroCount = 0;
    let sum = 1;
    nums.forEach(item => {
        if (item === 0) {
            zeroCount++;
        } else {
            sum *= item;
        }
    });

    let ans = [];

    nums.forEach(item => {
        if (item === 0) {
            if (zeroCount === 1) {
                ans.push(sum);
            } else {
                ans.push(0);
            }
        } else if (zeroCount > 0) {
            ans.push(0);
        } else {
            ans.push(sum / item);
        }
    });

    return ans;
};
