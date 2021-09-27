var removeKey = function (count, key) {
    if (count[key]) {
        if (count[key] === 1) {
            delete count[key];
        } else {
            count[key] -= 1;
        }
    } else {
        count[key] = -1;
    }
    return count;
};

var addKey = function (count, key) {
    if (count[key]) {
        if (count[key] == -1) {
            delete count[key];
        } else {
            count[key] += 1;
        }
    } else {
        count[key] = 1;
    }
    return count;
};
/**
 * @param {string} s
 * @param {string} p
 * @return {number[]}
 */
var findAnagrams = function (s, p) {
    let count = {};
    for (let i = 0; i < p.length; i++) {
        count = addKey(count, s[i]);
    }
    let countCheck = { ...count };
    for (let i = 0; i < p.length; i++) {
        countCheck = removeKey(countCheck, p[i]);
    }
    let result = Object.keys(countCheck).length == 0 ? [0] : [];
    for (let i = 1; i <= s.length - p.length; i++) {
        countCheck = removeKey(countCheck, s[i - 1]);
        countCheck = addKey(countCheck, s[i + p.length - 1]);
        if (Object.keys(countCheck).length == 0) {
            result = [...result, i];
        }
    }
    return result;
};
