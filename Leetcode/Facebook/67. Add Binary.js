/**
 * https://leetcode.com/problems/add-binary/
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function (a, b) {
    a = a.split("").reverse().join("");
    b = b.split("").reverse().join("");
    let ans = "";
    let carry = 0;
    for (let i = 0; i < Math.max(a.length, b.length); i++) {
        let sum = parseInt(a[i] || 0) + parseInt(b[i] || 0) + carry;
        if (sum === 0) {
            carry = 0;
            ans += "0";
        } else if (sum === 1) {
            carry = 0;
            ans += "1";
        } else if (sum === 2) {
            carry = 1;
            ans += "0";
        } else {
            carry = 1;
            ans += "1";
        }
    }
    ans = carry ? ans + carry : ans;
    return ans.split("").reverse().join("");
};
