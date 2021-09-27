/**
 * https://leetcode.com/problems/find-all-anagrams-in-a-string/
 * @param {string} s
 * @param {string} p
 * @return {number[]}
 */
var findAnagrams = function (s, p) {
    let ans = [];
    const pMap = {};
    const sMap = {};
    for (let i = 0; i < p.length; i++) {
        pMap[p[i]] = (pMap[p[i]] || 0) + 1;
    }

    for (let i = 0; i < s.length; i++) {
        sMap[s[i]] = (sMap[s[i]] || 0) + 1;
        if (i >= p.length - 1) {
            if (isEqualMap(sMap, pMap)) ans.push(i - p.length + 1);
            sMap[s[i - p.length + 1]] -= 1;
            if (sMap[s[i - p.length + 1]] === 0) delete sMap[s[i - p.length + 1]];
        }
    }

    return ans;
};

const isEqualMap = (a, b) => {
    if (Object.keys(a).length !== Object.keys(b).length) {
        return false;
    }

    return !Object.keys(a).some(item => a[item] !== b[item]);
};
