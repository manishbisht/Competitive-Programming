/**
 * https://leetcode.com/problems/word-break/
 * @param {string} s
 * @param {string[]} wordDict
 * @return {boolean}
 */
var wordBreak = function (s, wordDict) {
    const dp = Array(s.length).fill(0);
    for (let i = 0; i < s.length; i++) {
        for (let j = 0; j <= i; j++) {
            if (wordDict.includes(s.substring(j, i + 1))) {
                dp[i] += j > 0 ? dp[j - 1] : 1;
            }
        }
    }
    return dp[dp.length - 1] > 0;
};
