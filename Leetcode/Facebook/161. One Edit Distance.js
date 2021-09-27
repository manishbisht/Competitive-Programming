/**
 * https://leetcode.com/problems/one-edit-distance/
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */

let ans;

var isOneEditDistance = function (s, t) {
    ans = s.length + t.length;
    editDistance(s, t, 0);
    return ans === 1;
};

const editDistance = (s, t, count) => {
    if (count > 1) return;

    if ((s.length === 0 && t.length === 0) || s === t) {
        ans = Math.min(ans, count);
        return;
    }

    if (s.length > 0 && t.length > 0) {
        if (s[0] === t[0]) {
            editDistance(s.substring(1), t.substring(1), count);
        } else {
            editDistance(s.substring(1), t.substring(1), count + 1);
        }
    }

    if (s.length > 0) {
        editDistance(s.substring(1), t, count + 1);
    }

    if (t.length > 0) {
        editDistance(s, t.substring(1), count + 1);
    }
};
