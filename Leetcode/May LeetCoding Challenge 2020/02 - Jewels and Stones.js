/**
 * @param {string} J
 * @param {string} S
 * @return {number}
 */
var numJewelsInStones = function (J, S) {
    const count = {};
    let ans = 0;
    [...S].forEach(character => {
        if (count[character]) {
            count[character] += 1;
        } else {
            count[character] = 1;
        }
    });

    [...J].forEach(character => {
        if (count[character]) {
            ans += count[character];
        }
    });

    return ans;
};
