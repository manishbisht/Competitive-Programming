/**
 * @param {string} s1
 * @param {string} s2
 * @return {boolean}
 */
var checkInclusion = function (s1, s2) {
    const count = {};
    [...s1].forEach(character => {
        if (count[character]) {
            count[character] += 1;
        } else {
            count[character] = 1;
        }
    });
    let i = 0;
    let j = 0;
    let charCount = s1.length;
    while (j < s2.length) {
        if (count[s2[j]] > 0) {
            charCount -= 1;
        }
        if (count[s2[j]]) {
            count[s2[j]] -= 1;
        } else {
            count[s2[j]] = -1;
        }
        j += 1;
        if (charCount == 0) {
            return true;
        }
        if (j - i == s1.length) {
            if (count[s2[i]] >= 0) {
                charCount += 1;
            }
            if (count[s2[i]]) {
                count[s2[i]] += 1;
            } else {
                count[s2[i]] = 1;
            }
            i += 1;
        }
    }
    return false;
};
