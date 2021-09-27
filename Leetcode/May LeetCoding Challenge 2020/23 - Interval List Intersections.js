/**
 * @param {number[][]} A
 * @param {number[][]} B
 * @return {number[][]}
 */
var intervalIntersection = function (A, B) {
    let ans = [];
    let i = 0;
    let j = 0;
    while (i < A.length && j < B.length) {
        let left = Math.max(A[i][0], B[j][0]);
        let right = Math.min(A[i][1], B[j][1]);
        if (left <= right) {
            ans.push([left, right]);
        }
        if (A[i][1] < B[j][1]) {
            i += 1;
        } else {
            j += 1;
        }
    }
    return ans;
};
