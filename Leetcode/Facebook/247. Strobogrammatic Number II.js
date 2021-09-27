/**
 * https://leetcode.com/problems/strobogrammatic-number-ii/
 * @param {number} n
 * @return {string[]}
 */
var findStrobogrammatic = function (n) {
    return generate(n, "", []);
};

const generate = (n, current, ans) => {
    if (n % 2 == 1) {
        ["0", "1", "8"].forEach(item => {
            generate(n - 1, item, ans);
        });
    } else if (n) {
        [
            ["0", "0"],
            ["1", "1"],
            ["8", "8"],
            ["6", "9"],
            ["9", "6"],
        ].forEach((item, index) => {
            if ((index === 0 && n > 2) || index !== 0) {
                generate(n - 2, item[0] + "" + current + "" + item[1], ans);
            }
        });
    } else {
        ans.push(current);
    }

    return ans;
};
