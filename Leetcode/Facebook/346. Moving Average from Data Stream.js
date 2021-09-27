/**
 * https://leetcode.com/problems/moving-average-from-data-stream/
 * Initialize your data structure here.
 * @param {number} size
 */
var MovingAverage = function (size) {
    this.size = size;
    this.values = [];
};

/**
 * @param {number} val
 * @return {number}
 */
MovingAverage.prototype.next = function (val) {
    if (this.values.length >= this.size) {
        this.values = this.values.slice(1);
    }
    this.values.push(val);

    sum = 0;
    this.values.forEach(a => (sum += a));

    return sum / this.values.length;
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * var obj = new MovingAverage(size)
 * var param_1 = obj.next(val)
 */
