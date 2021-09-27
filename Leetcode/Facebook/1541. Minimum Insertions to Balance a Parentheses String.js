/**
 * https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/
 * @param {string} s
 * @return {number}
 */
var minInsertions = function (s) {
    let count = 0;
    let ans = 0;
    for (let i = 0; i < s.length; i++) {
        if (s[i] === "(") {
            if (count % 2 === 1) {
                count--;
                ans++;
            }
            count += 2;
        } else if (count > 0) {
            count--;
        } else {
            count++;
            ans++;
        }
    }

    return ans + count;
};
