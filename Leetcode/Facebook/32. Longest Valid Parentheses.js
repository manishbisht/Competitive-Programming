/**
 * https://leetcode.com/problems/longest-valid-parentheses/
 * @param {string} s
 * @return {number}
 */
var longestValidParentheses = function (s) {
    ans = 0;
    solve(s);
    solve(
        s
            .split("")
            .reverse()
            .map(item => (item === "(" ? ")" : "("))
            .join("")
    );
    return ans;
};

let ans;

const solve = s => {
    let count = 0;
    let currentLength = 0;
    for (let i = 0; i < s.length; i++) {
        if (s[i] === "(") {
            count++;
            currentLength++;
        } else if (count > 0) {
            count--;
            currentLength++;
        } else {
            count = 0;
            currentLength = 0;
        }
        if (count === 0) ans = Math.max(ans, currentLength);
    }

    return ans;
};
