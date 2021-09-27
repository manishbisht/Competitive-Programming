/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function (strs) {
    const result = [];
    const cache = {};

    for (let i = 0; i < strs.length; i++) {
        let sortedStringKey = strs[i].split("").sort().join("");
        if (cache[sortedStringKey]) {
            result[cache[sortedStringKey] - 1].push(strs[i]);
        } else {
            cache[sortedStringKey] = result.length + 1;
            result[result.length] = [strs[i]];
        }
    }

    return result;
};
