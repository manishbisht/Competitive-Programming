/**
 * @param {number} num
 * @return {boolean}
 */
var isPerfectSquare = function (num) {
    let ans = false;
    for (let i = 1; i <= Math.ceil(num / 2); i++) {
        if (i * i == num) {
            ans = true;
        }
    }
    return ans;
};
