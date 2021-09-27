/**
 * @param {number[]} A
 * @return {number}
 */
var maxSubarraySumCircular = function (A) {
    let total = 0;
    let maxSum = -Number.MAX_SAFE_INTEGER;
    let curMax = 0;
    let minSum = Number.MAX_SAFE_INTEGER;
    let curMin = 0;

    for (let i = 0; i < A.length; i++) {
        curMax = Math.max(curMax + A[i], A[i]);
        maxSum = Math.max(maxSum, curMax);
        curMin = Math.min(curMin + A[i], A[i]);
        minSum = Math.min(minSum, curMin);
        total += A[i];
    }

    return maxSum > 0 ? Math.max(maxSum, total - minSum) : maxSum;
};
