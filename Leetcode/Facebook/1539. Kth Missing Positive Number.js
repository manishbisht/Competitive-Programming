/**
 * https://leetcode.com/problems/kth-missing-positive-number/
 * @param {number[]} arr
 * @param {number} k
 * @return {number}
 */
var findKthPositive = function (arr, k) {
    const missing = [];
    let i = 1;
    while (missing.length < k) {
        if (!arr.includes(i)) {
            missing.push(i);
        }
        i++;
    }

    return missing[k - 1];
};
