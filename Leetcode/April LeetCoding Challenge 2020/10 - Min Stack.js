/**
 * initialize your data structure here.
 */
var MinStack = function () {
    this.data = [];
};

/**
 * @param {number} x
 * @return {void}
 */
MinStack.prototype.push = function (x) {
    this.data.push({
        value: x,
        minimum:
            this.data.length > 0
                ? this.data[this.data.length - 1].minimum < x
                    ? this.data[this.data.length - 1].minimum
                    : x
                : x,
    });
};

/**
 * @return {void}
 */
MinStack.prototype.pop = function () {
    this.data = this.data.slice(0, -1);
};

/**
 * @return {number}
 */
MinStack.prototype.top = function () {
    return this.data[this.data.length - 1].value;
};

/**
 * @return {number}
 */
MinStack.prototype.getMin = function () {
    return this.data[this.data.length - 1].minimum;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * var obj = new MinStack()
 * obj.push(x)
 * obj.pop()
 * var param_3 = obj.top()
 * var param_4 = obj.getMin()
 */
