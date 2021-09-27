/**
 * https://leetcode.com/problems/decode-ways/
 * @param {string} s
 * @return {number}
 */
const dp = {};
var numDecodings = function (s) {
    if (s === "") return 1;
    if (s[0] === 0) return 0;

    if (s.length > 1 && parseInt(s.substring(0, 2)) < 27) {
        dp[s.substring(1, s.length)] = dp[s.substring(1, s.length)] || numDecodings(s.substring(1, s.length));
        dp[s.substring(2, s.length)] = dp[s.substring(2, s.length)] || numDecodings(s.substring(2, s.length));
        return dp[s.substring(1, s.length)] + dp[s.substring(2, s.length)];
    }

    dp[s.substring(1, s.length)] = dp[s.substring(1, s.length)] || numDecodings(s.substring(1, s.length));
    return dp[s.substring(1, s.length)];
};
