/**
 * @param {number[]} nums
 */
var FirstUnique = function (nums) {
    this.count = {};
    for (let i = 0; i < nums.length; i++) {
        if (this.count[nums[i]]) {
            this.count[nums[i]] += 1;
        } else {
            this.count[nums[i]] = 1;
        }
    }
    this.values = nums;
};

/**
 * @return {number}
 */
FirstUnique.prototype.showFirstUnique = function () {
    for (let i = 0; i < this.values.length; i++) {
        if (this.count[this.values[i]] == 1) {
            return this.values[i];
        }
    }
    return -1;
};

/**
 * @param {number} value
 * @return {void}
 */
FirstUnique.prototype.add = function (value) {
    if (this.count[value]) {
        this.count[value] += 1;
    } else {
        this.count[value] = 1;
    }
    this.values.push(value);
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * var obj = new FirstUnique(nums)
 * var param_1 = obj.showFirstUnique()
 * obj.add(value)
 */
