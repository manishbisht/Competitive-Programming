/**
 * https://leetcode.com/problems/combination-sum/
 * @param {number[]} candidates
 * @param {number} target
 * @return {number[][]}
 */
var combinationSum = function (candidates, target) {
    ans = [];
    solve(candidates, target, []);
    return ans;
};

let ans = [];

const solve = (candidates, target, current) => {
    if (candidates.length && target > 0) {
        solve(candidates, target - candidates[0], [...current, candidates[0]]);
        solve(candidates.slice(1), target, current);
    }

    if (target === 0) {
        ans.push(current);
    }
};
