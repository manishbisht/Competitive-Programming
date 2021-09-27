/**
 * https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function (nums, target) {
    return [solve(nums, target, true), solve(nums, target, false)];
};

const solve = (nums, target, isLeft) => {
    let start = 0;
    let end = nums.length - 1;
    let ans = -1;
    while (start <= end) {
        let mid = start + Math.floor((end - start) / 2);
        if (nums[mid] === target) {
            ans = mid;
            if (isLeft) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        } else if (nums[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
};
