/**
 * https://leetcode.com/problems/random-pick-with-weight/
 * @param {number[]} w
 */
var Solution = function (w) {
    this.sum = 0;
    this.values = w.map(item => {
        this.sum += item;
        return this.sum;
    });
};

/**
 * @return {number}
 */
Solution.prototype.pickIndex = function () {
    const target = this.sum * Math.random();
    let left = 0;
    let right = this.values.length;
    while (left < right) {
        let mid = left + Math.floor((right - left) / 2);
        if (target > this.values[mid]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left;
};

/**
 * Your Solution object will be instantiated and called as such:
 * var obj = new Solution(w)
 * var param_1 = obj.pickIndex()
 */
