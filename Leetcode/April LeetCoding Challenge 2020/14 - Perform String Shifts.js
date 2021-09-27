/**
 * @param {string} s
 * @param {number[][]} shift
 * @return {string}
 */
var stringShift = function (s, shift) {
    let shiftCount = 0;
    for (let i = 0; i < shift.length; i++) {
        if (shift[i][0] == 0) {
            shiftCount -= shift[i][1];
        } else {
            shiftCount += shift[i][1];
        }
    }
    shiftCount = shiftCount % s.length;
    if (shiftCount > 0) {
        return s.substring(s.length - shiftCount, s.length) + s.substring(0, s.length - shiftCount);
    }
    return s.substring(0 - shiftCount, s.length) + s.substring(0, 0 - shiftCount);
};
