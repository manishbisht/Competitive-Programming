/**
 * https://leetcode.com/problems/sort-array-by-parity/
 * @param {number[]} nums
 * @return {number[]}
 */
var sortArrayByParity = function (nums) {
    nums.sort(a => (a % 2 == 0 ? -1 : 0));
    return nums;
};
