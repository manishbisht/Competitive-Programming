/**
 * https://leetcode.com/problems/employee-free-time/
 * // Definition for an Interval.
 * function Interval(start, end) {
 *    this.start = start;
 *    this.end = end;
 * };
 */

/**
 * @param {Interval[][]} schedule
 * @return {Interval[]}
 */
var employeeFreeTime = function (schedule) {
    const intervals = schedule.reduce((acc, item) => {
        acc = [...acc, ...item];
        return acc;
    }, []);
    intervals.sort((a, b) => a.start - b.start);
    let ans = [];
    let end = intervals[0].end;
    for (let i = 1; i < intervals.length; i++) {
        if (intervals[i].start <= end) {
            end = Math.max(end, intervals[i].end);
        } else {
            ans.push(new Interval(end, intervals[i].start));
            end = intervals[i].end;
        }
    }
    return ans;
};
