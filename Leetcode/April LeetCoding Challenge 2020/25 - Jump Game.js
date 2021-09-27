/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function (nums) {
    if (nums.length <= 1) {
        return true;
    }

    let ans = nums[0];

    for (let i = 0; i < nums.length; i++) {
        if (ans <= i && nums[i] == 0) {
            return false;
        }

        if (i + nums[i] > ans) {
            ans = i + nums[i];
        }

        if (ans >= nums.length - 1) {
            return true;
        }
    }
    return false;
};
