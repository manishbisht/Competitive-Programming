/**
 * https://leetcode.com/problems/remove-one-element-to-make-the-array-strictly-increasing/
 * @param {number[]} nums
 * @return {boolean}
 */
var canBeIncreasing = function (nums) {
    if (isSorted(nums)) return true;

    for (let i = 0; i < nums.length; i++) {
        if (isSorted(nums.filter((item, index) => index !== i))) {
            return true;
        }
    }

    return false;
};

const isSorted = nums => {
    let ans = true;
    let i = 1;
    while (i < nums.length && ans) {
        if (nums[i - 1] >= nums[i]) {
            ans = false;
        }
        i++;
    }
    return ans;
};
