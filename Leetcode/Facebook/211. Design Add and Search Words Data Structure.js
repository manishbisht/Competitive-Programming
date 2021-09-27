/**
 * https://leetcode.com/problems/design-add-and-search-words-data-structure/
 * Initialize your data structure here.
 */
var WordDictionary = function () {
    this.words = [];
    this.ans = {};
    this.changed = false;
};

/**
 * @param {string} word
 * @return {void}
 */
WordDictionary.prototype.addWord = function (word) {
    this.words.push(word);
    this.changed = true;
};

/**
 * @param {string} word
 * @return {boolean}
 */
WordDictionary.prototype.search = function (word) {
    if (!this.changed && this.ans.hasOwnProperty(word)) return this.ans[word];
    this.changed = false;
    if (
        this.words.some(s => {
            if (word.length === s.length) {
                let ans = true;
                for (let i = 0; i < word.length; i++) {
                    if (word[i] === s[i] || word[i] === ".") {
                    } else {
                        ans = false;
                    }
                }
                return ans;
            }
            return false;
        })
    ) {
        this.ans[word] = true;
        return true;
    }
    this.ans[word] = false;
    return false;
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * var obj = new WordDictionary()
 * obj.addWord(word)
 * var param_2 = obj.search(word)
 */
