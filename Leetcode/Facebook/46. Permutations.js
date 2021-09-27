/**
 * https://leetcode.com/problems/permutations/
 * @param {number[]} nums
 * @return {number[][]}
 */
var permute = function (nums) {
    return generate(nums, [], []);
};

const generate = (nums, current, ans) => {
    if (nums.length) {
        nums.forEach(item => {
            generate(
                nums.filter(a => a !== item),
                [...current, item],
                ans
            );
        });
    } else {
        ans.push(current);
    }

    return ans;
};
