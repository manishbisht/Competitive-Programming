/**
 * @param {number} num
 * @return {number}
 */
var findComplement = function (num) {
    let binaryRepresentation = (num >>> 0).toString(2);
    let ans = 0;

    [...binaryRepresentation].forEach((value, index) => {
        if (value == "0") {
            ans += 2 ** (binaryRepresentation.length - index - 1);
        }
    });

    return ans;
};
