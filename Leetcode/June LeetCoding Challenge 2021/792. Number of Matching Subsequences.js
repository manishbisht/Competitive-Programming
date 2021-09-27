/**
 * https://leetcode.com/problems/number-of-matching-subsequences/
 * @param {string} s
 * @param {string[]} words
 * @return {number}
 */
var numMatchingSubseq = function (s, words) {
    let dp = {};
    let ans = 0;
    words.forEach(word => {
        if (dp.hasOwnProperty(word)) {
            if (dp[word]) ans += 1;
        } else if (isSubsequence(s, word)) {
            dp[word] = 1;
            ans += 1;
        } else {
            dp[word] = 0;
        }
    });
    return ans;
};

const isSubsequence = (s, word) => {
    if (s.length && word.length) {
        if (word[0] === s[0]) {
            return isSubsequence(s.substring(1), word.substring(1));
        } else {
            return isSubsequence(s.substring(1), word);
        }
    }

    return word.length ? false : true;
};
