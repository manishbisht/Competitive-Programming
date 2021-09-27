/**
 * https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
 * @param {string} s
 * @return {number}
 */
var minAddToMakeValid = function (s) {
    let ans = 0;
    let count = 0;
    for (let i = 0; i < s.length; i++) {
        if (s[i] === "(") {
            count++;
        } else if (count > 0) {
            count--;
        } else {
            ans++;
        }
    }
    return ans + count;
};
