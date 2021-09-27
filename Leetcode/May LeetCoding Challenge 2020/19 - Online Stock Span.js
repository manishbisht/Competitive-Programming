var StockSpanner = function () {
    this.prices = [];
    this.spans = [];
};

/**
 * @param {number} price
 * @return {number}
 */
StockSpanner.prototype.next = function (price) {
    let span = 1;
    let i = this.spans.length - 1;
    while (i >= 0 && price >= this.prices[i]) {
        span += this.spans[i];
        i -= this.spans[i];
    }
    this.spans.push(span);
    this.prices.push(price);
    return span;
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * var obj = new StockSpanner()
 * var param_1 = obj.next(price)
 */
