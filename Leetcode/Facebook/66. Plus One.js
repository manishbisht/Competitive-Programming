/**
 * https://leetcode.com/problems/plus-one/
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function (digits) {
    let ans = [];
    let carry = 0;
    digits.reverse().forEach((digit, index) => {
        let current = digit;
        if (index === 0) {
            current = digit + 1;
        }
        current += carry;
        carry = 0;
        if (current > 9) {
            carry = parseInt(current / 10);
            current = current % 10;
        }
        ans = [current, ...ans];
    });

    return carry ? [carry, ...ans] : ans;
};
