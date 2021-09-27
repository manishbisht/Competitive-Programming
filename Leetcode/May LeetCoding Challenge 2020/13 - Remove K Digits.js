/**
 * @param {string} num
 * @param {number} k
 * @return {string}
 */
var removeKdigits = function (num, k) {
    num = num.split("");
    if (num.length == k) {
        return "0";
    }

    for (let i = 0; i < k; i++) {
        let j = 0;
        while (j + 1 < num.length && num[j] <= num[j + 1]) {
            j++;
        }
        num.splice(j, 1);
    }

    while (num.length > 0 && num[0] == "0") {
        num.splice(0, 1);
    }

    if (num.length == 0) {
        return "0";
    }

    return num.join("");
};
