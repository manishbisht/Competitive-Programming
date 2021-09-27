/**
 * @param {string} s
 * @return {number}
 */
var firstUniqChar = function (s) {
    const count = {};
    let ans = -1;
    [...s].forEach(character => {
        if (count[character]) {
            count[character] += 1;
        } else {
            count[character] = 1;
        }
    });

    for (let i = 0; i < s.length; i++) {
        if (count[s[i]] == 1) {
            ans = i;
            break;
        }
    }

    return ans;
};
