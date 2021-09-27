/**
 * https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/
 * @param {string} s
 * @return {string}
 */
var minRemoveToMakeValid = function (s) {
    let ans = "";
    let balance = 0;
    for (let i = 0; i < s.length; i++) {
        if (s[i] === "(") {
            balance += 1;
            ans += s[i];
        } else if (s[i] === ")") {
            if (balance > 0) {
                balance -= 1;
                ans += s[i];
            }
        } else {
            ans += s[i];
        }
    }
    let finalAns = "";
    for (let i = ans.length - 1; i >= 0; i--) {
        if (ans[i] === "(" && balance > 0) {
            balance -= 1;
        } else {
            finalAns = ans[i] + finalAns;
        }
    }
    return finalAns;
};
