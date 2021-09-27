/**
 * https://leetcode.com/problems/permutations-ii/
 * @param {number[]} nums
 * @return {number[][]}
 */
var permuteUnique = function (nums) {
    return generate(nums, [], []);
};

const generate = (nums, current, ans) => {
    if (nums.length) {
        nums.forEach((item, index) => {
            generate(
                nums.filter((a, b) => b !== index),
                [...current, item],
                ans
            );
        });
    } else {
        let found = false;
        ans.forEach((item, index) => {
            let present = true;
            item.forEach((a, index) => {
                if (a === current[index]) {
                } else {
                    present = false;
                }
            });
            if (present) found = true;
        });
        if (!found) ans.push(current);
    }

    return ans;
};
