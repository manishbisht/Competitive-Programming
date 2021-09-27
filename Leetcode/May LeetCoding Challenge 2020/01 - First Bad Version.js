/**
 * Definition for isBadVersion()
 *
 * @param {integer} version number
 * @return {boolean} whether the version is bad
 * isBadVersion = function(version) {
 *     ...
 * };
 */

/**
 * @param {function} isBadVersion()
 * @return {function}
 */
var solution = function (isBadVersion) {
    /**
     * @param {integer} n Total versions
     * @return {integer} The first bad version
     */
    return function (n) {
        let high = n;
        let low = 1;
        let ans = 1;
        while (low <= high) {
            let mid = parseInt((low + high) / 2);
            if (isBadVersion(mid)) {
                if ((mid > 1 && !isBadVersion(mid - 1)) || mid == 1) {
                    ans = mid;
                    break;
                } else {
                    high = mid - 1;
                }
            } else {
                low = mid + 1;
            }
        }
        return ans;
    };
};
