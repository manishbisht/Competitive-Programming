/**
 * https://leetcode.com/problems/shortest-distance-to-target-color/
 * @param {number[]} colors
 * @param {number[][]} queries
 * @return {number[]}
 */
var shortestDistanceColor = function (colors, queries) {
    let distance = [];
    let current = [-1, -1, -1];
    colors.forEach(item => {
        current = current.map(a => (a !== -1 ? a + 1 : -1));
        current[item - 1] = 0;
        distance.push(current);
    });

    let rightDistance = [];
    current = [-1, -1, -1];
    colors.reverse().forEach(item => {
        current = current.map(a => (a !== -1 ? a + 1 : -1));
        current[item - 1] = 0;
        rightDistance.push(current);
    });
    rightDistance = rightDistance.reverse();

    distance = distance.map((item, index) => {
        return item.map((a, index2) => {
            if (a === -1 && rightDistance[index][index2] === -1) {
                return -1;
            } else if (a === -1) {
                return rightDistance[index][index2];
            } else if (rightDistance[index][index2] === -1) {
                return a;
            } else {
                return Math.min(a, rightDistance[index][index2]);
            }
        });
    });

    return queries.map(item => distance[item[0]][item[1] - 1]);
};
