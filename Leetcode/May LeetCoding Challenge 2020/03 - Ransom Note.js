/**
 * @param {string} ransomNote
 * @param {string} magazine
 * @return {boolean}
 */
var canConstruct = function (ransomNote, magazine) {
    const count = {};
    [...magazine].forEach(character => {
        if (count[character]) {
            count[character] += 1;
        } else {
            count[character] = 1;
        }
    });

    let ans = true;

    [...ransomNote].forEach(character => {
        if (count[character]) {
            count[character] -= 1;
        } else {
            ans = false;
        }
    });

    return ans;
};
