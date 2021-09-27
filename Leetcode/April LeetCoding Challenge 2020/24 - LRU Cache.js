/**
 * @param {number} capacity
 */
var LRUCache = function (capacity) {
    this.lastTrackedKeys = [];
    this.value = {};
    this.capacity = capacity;
};

/**
 * @param {number} key
 * @return {number}
 */
LRUCache.prototype.get = function (key) {
    if (this.lastTrackedKeys.includes(key)) {
        this.lastTrackedKeys.splice(this.lastTrackedKeys.indexOf(key), 1);
        this.lastTrackedKeys.unshift(key);
    }
    return this.value[key] || -1;
};

/**
 * @param {number} key
 * @param {number} value
 * @return {void}
 */
LRUCache.prototype.put = function (key, value) {
    if (this.lastTrackedKeys.includes(key)) {
        this.lastTrackedKeys.splice(this.lastTrackedKeys.indexOf(key), 1);
    }

    if (this.capacity == this.lastTrackedKeys.length) {
        delete this.value[this.lastTrackedKeys[this.lastTrackedKeys.length - 1]];
        this.lastTrackedKeys.splice(this.lastTrackedKeys.length - 1, 1);
    }

    this.value[key] = value;
    this.lastTrackedKeys.unshift(key);
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * var obj = new LRUCache(capacity)
 * var param_1 = obj.get(key)
 * obj.put(key,value)
 */
