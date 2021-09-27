/**
 * https://leetcode.com/problems/group-anagrams/
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function (strs) {
    strs = strs.map(item => {
        let sortedKey = item
            .split("")
            .sort((a, b) => a.localeCompare(b))
            .join("");
        return {
            sortedKey,
            originalKey: item,
        };
    });

    strs.sort((a, b) => a.sortedKey.localeCompare(b.sortedKey));

    let prev;

    return strs.reduce((acc, item) => {
        if (item.sortedKey === prev) {
            acc[acc.length - 1].push(item.originalKey);
        } else {
            acc.push([item.originalKey]);
            prev = item.sortedKey;
        }
        return acc;
    }, []);
};
