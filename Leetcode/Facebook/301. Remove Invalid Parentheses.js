/**
 * https://leetcode.com/problems/remove-invalid-parentheses/
 * @param {string} s
 * @return {string[]}
 */
var removeInvalidParentheses = function (s) {
    ans = {};
    solve("", s, s.length - inValidCount(s));
    return Object.keys(ans);
};

let ans;

const solve = (current, s, count) => {
    if (s.length) {
        if (s[0] === "(" || s[0] === ")") {
            solve(current, s.substring(1), count);
        }
        solve(current + s[0], s.substring(1), count);
    }

    if (count === current.length && inValidCount(current) === 0) ans[current] = 1;
};

const inValidCount = s => {
    let ans = 0;
    let count = 0;
    for (let i = 0; i < s.length; i++) {
        if (s[i] === "(") {
            count++;
        } else if (s[i] === ")") {
            if (count > 0) {
                count--;
            } else {
                ans++;
            }
        }
    }

    return count + ans;
};
