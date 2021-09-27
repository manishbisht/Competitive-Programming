/**
 * @param {number[]} arr
 * @return {number}
 */
var countElements = function (arr) {
    let result = 0;
    const countMap = {};
    for (let i = 0; i < arr.length; i++) {
        if (countMap[arr[i]]) {
            countMap[arr[i]] += 1;
        } else {
            countMap[arr[i]] = 1;
        }
    }
    Object.keys(countMap).forEach(value => {
        if (countMap[parseInt(value) + 1]) {
            result += countMap[parseInt(value)];
        }
    });
    return result;
};
