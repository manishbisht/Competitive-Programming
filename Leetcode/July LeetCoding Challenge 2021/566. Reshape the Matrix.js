/**
 * https://leetcode.com/problems/reshape-the-matrix/
 * @param {number[][]} mat
 * @param {number} r
 * @param {number} c
 * @return {number[][]}
 */
var matrixReshape = function (mat, r, c) {
    if (mat.length * mat[0].length !== r * c) return mat;
    const ans = Array(r)
        .fill(0)
        .map(() => []);
    let k = 0;
    let l = 0;
    for (let i = 0; i < mat.length; i++) {
        for (let j = 0; j < mat[0].length; j++) {
            if (l === c) {
                l = 0;
                k++;
            }
            ans[k].push(mat[i][j]);
            l++;
        }
    }
    return ans;
};
