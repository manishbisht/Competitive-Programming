/**
 * Initialize your data structure here.
 */
var Trie = function () {
    this.data = {};
};

/**
 * Inserts a word into the trie.
 * @param {string} word
 * @return {void}
 */
Trie.prototype.insert = function (word) {
    let treeData = this.data;
    word.split("").forEach(character => {
        if (!treeData[character]) {
            treeData[character] = {};
        }
        treeData = treeData[character];
    });
    treeData.end = true;
};

/**
 * Returns if the word is in the trie.
 * @param {string} word
 * @return {boolean}
 */
Trie.prototype.search = function (word) {
    let treeData = this.data;
    let found = true;
    let i = 0;
    while (i < word.length && found) {
        if (!treeData[word[i]]) {
            found = false;
            break;
        }
        treeData = treeData[word[i]];
        i++;
    }
    return i == word.length && treeData.end ? found : false;
};

/**
 * Returns if there is any word in the trie that starts with the given prefix.
 * @param {string} prefix
 * @return {boolean}
 */
Trie.prototype.startsWith = function (prefix) {
    let treeData = this.data;
    let found = true;
    let i = 0;
    while (i < prefix.length && found) {
        if (!treeData[prefix[i]]) {
            found = false;
            break;
        }
        treeData = treeData[prefix[i]];
        i++;
    }
    return i == prefix.length ? found : false;
};

/**
 * Your Trie object will be instantiated and called as such:
 * var obj = new Trie()
 * obj.insert(word)
 * var param_2 = obj.search(word)
 * var param_3 = obj.startsWith(prefix)
 */
