/**
 * https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
 * @param {string} s
 * @return {number}
 */
var maxDepth = function (s) {
    let ans = 0;
    let count = 0;
    for (let i = 0; i < s.length; i++) {
        if (s[i] === "(") {
            count++;
        } else if (s[i] === ")") {
            count--;
        }
        ans = Math.max(ans, count);
    }
    return ans;
};
