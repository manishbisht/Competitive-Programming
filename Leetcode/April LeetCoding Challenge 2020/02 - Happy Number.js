var squareSum = function (n) {
    let sum = 0;
    while (n) {
        let digit = n % 10;
        sum += digit * digit;
        n = parseInt(n / 10);
    }
    return sum;
};

/**
 * @param {number} n
 * @return {boolean}
 */
var isHappy = function (n) {
    let track = {};
    while (!track[n]) {
        track[n] = 1;
        n = squareSum(n);
        if (track[n] === 1) {
            break;
        }
    }
    return n === 1 ? true : false;
};
