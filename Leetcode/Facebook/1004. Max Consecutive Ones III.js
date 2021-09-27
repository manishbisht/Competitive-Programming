/**
 * https://leetcode.com/problems/max-consecutive-ones-iii/
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var longestOnes = function (nums, k) {
    let ans = 0;
    let count = 0;
    let i = 0;
    let j = 0;
    while (j < nums.length) {
        if (nums[j] === 1) {
            count++;
            j++;
        } else {
            if (k === 0) {
                if (nums[i] === 0) {
                    k++;
                }
                count--;
                i++;
            } else {
                k--;
                count++;
                j++;
            }
        }
        ans = Math.max(ans, count);
    }
    return ans;
};
