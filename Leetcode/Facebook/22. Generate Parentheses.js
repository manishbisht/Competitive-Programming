/**
 * https://leetcode.com/problems/generate-parentheses/
 * @param {number} n
 * @return {string[]}
 */
var generateParenthesis = function (n) {
    ans = {};
    generate(n * 2, n * 2, "", 0);
    return Object.keys(ans).reverse();
};

let ans = {};

const generate = (size, n, current) => {
    if (n) {
        generate(size, n - 1, current + "(");
        generate(size, n - 1, current + ")");
    }

    if (current.length === size && isBalanced(current)) ans[current] = 1;

    return current;
};

const isBalanced = s => {
    let ans = true;
    let count = 0;
    for (let i = 0; i < s.length; i++) {
        if (s[i] === "(") {
            count++;
        } else if (count > 0) {
            count--;
        } else {
            ans = false;
        }
    }

    return count > 0 ? false : ans;
};
