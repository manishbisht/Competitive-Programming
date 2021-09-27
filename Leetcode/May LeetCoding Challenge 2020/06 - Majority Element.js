/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function (nums) {
    const count = {};
    let ans = -1;

    [...nums].forEach(value => {
        if (count[value]) {
            count[value] += 1;
        } else {
            count[value] = 1;
        }

        if (count[value] > nums.length / 2) {
            ans = value;
        }
    });

    return ans;
};
