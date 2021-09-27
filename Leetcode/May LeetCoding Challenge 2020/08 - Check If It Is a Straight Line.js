/**
 * @param {number[][]} coordinates
 * @return {boolean}
 */
var checkStraightLine = function (coordinates) {
    let ans = true;
    let xChange = coordinates[0][0] - coordinates[1][0];
    let yChange = coordinates[0][1] - coordinates[1][1];
    let x = coordinates[0][0];
    let y = coordinates[0][1];
    coordinates.splice(0, 2);
    [...coordinates].forEach(coordinate => {
        if (xChange === 0) {
            if (x !== coordinate[0]) {
                ans = false;
            }
        } else if (yChange === 0) {
            if (y !== coordinate[1]) {
                ans = false;
            }
        } else if (xChange * (y - coordinate[1]) !== yChange * (x - coordinate[0])) {
            ans = false;
        }
    });
    return ans;
};
