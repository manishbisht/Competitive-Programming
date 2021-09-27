/**
 * https://leetcode.com/problems/find-all-duplicates-in-an-array/
 * @param {number[]} nums
 * @return {number[]}
 */
var findDuplicates = function (nums) {
    const check = {};
    let ans = [];
    nums.forEach(item => {
        if (check[item]) {
            ans.push(item);
        } else {
            check[item] = 1;
        }
    });

    return ans;
};
