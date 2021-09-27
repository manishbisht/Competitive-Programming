/**
 * @param {number} m
 * @param {number} n
 * @return {number}
 */
var rangeBitwiseAnd = function (m, n) {
    while (m < n) {
        n -= n & -n;
    }
    return n;
};
