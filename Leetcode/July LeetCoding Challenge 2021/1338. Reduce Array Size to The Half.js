/**
 * https://leetcode.com/problems/reduce-array-size-to-the-half/
 * @param {number[]} arr
 * @return {number}
 */
var minSetSize = function (arr) {
    let ans = 0;
    let count = {};
    arr.forEach(item => {
        count[item] = (count[item] || 0) + 1;
    });
    count = Object.keys(count).reduce((acc, item) => {
        acc.push(count[item]);
        return acc;
    }, []);
    count.sort((a, b) => b - a);
    let sum = arr.length / 2;
    for (let i = 0; i < count.length && sum > 0; i++) {
        sum -= count[i];
        ans++;
    }
    return ans;
};
