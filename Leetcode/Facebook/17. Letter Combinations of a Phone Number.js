/**
 * https://leetcode.com/problems/letter-combinations-of-a-phone-number/
 * @param {string} digits
 * @return {string[]}
 */
var letterCombinations = function (digits) {
    return generateCombinations(digits, "", []);
};

const numberToWordMap = {
    2: ["a", "b", "c"],
    3: ["d", "e", "f"],
    4: ["g", "h", "i"],
    5: ["j", "k", "l"],
    6: ["m", "n", "o"],
    7: ["p", "q", "r", "s"],
    8: ["t", "u", "v"],
    9: ["w", "x", "y", "z"],
};

const generateCombinations = (digits, word, ans) => {
    if (digits) {
        numberToWordMap[digits[0]].forEach(char => {
            generateCombinations(digits.substring(1), word + char, ans);
        });
    } else {
        if (word) ans.push(word);
    }

    return ans;
};
