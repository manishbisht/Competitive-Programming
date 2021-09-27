/**
 * https://leetcode.com/problems/subsets/
 * @param {number[]} nums
 * @return {number[][]}
 */
var subsets = function (nums) {
    return generateSubsets(nums, [], []);
};

const generateSubsets = (nums, current, ans) => {
    if (nums.length) {
        ans.push(current);
        nums.forEach((item, index1) => {
            generateSubsets(
                nums.filter((a, index2) => index2 > index1),
                [...current, item],
                ans
            );
        });
    } else {
        ans.push(current);
    }

    return ans;
};
