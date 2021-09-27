/**
 * @param {string} s
 * @param {number} k
 * @return {number}
 */
var lengthOfLongestSubstringKDistinct = function (s, k) {
    let i = 0;
    let j = 0;
    const check = {};
    let ans = 0;
    let count = 0;
    while (j < s.length) {
        if (check[s[j]]) {
            check[s[j]] += 1;
        } else {
            check[s[j]] = 1;
        }
        j++;
        count++;

        while (Object.keys(check).length > k) {
            check[s[i]] -= 1;
            if (check[s[i]] === 0) delete check[s[i]];
            i++;
            count--;
        }

        ans = Math.max(ans, count);
    }

    return ans;
};
