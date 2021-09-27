/**
 * @param {string} s
 * @return {string}
 */
var frequencySort = function (s) {
    const countArray = new Array(128).fill(0);

    [...s].forEach(character => {
        countArray[character.charCodeAt(0)] += 1;
    });

    let ans = s.split("").sort((a, b) => {
        return countArray[b.charCodeAt(0)] === countArray[a.charCodeAt(0)]
            ? b.charCodeAt(0) - a.charCodeAt(0)
            : countArray[b.charCodeAt(0)] - countArray[a.charCodeAt(0)];
    });

    return ans.join("");
};
