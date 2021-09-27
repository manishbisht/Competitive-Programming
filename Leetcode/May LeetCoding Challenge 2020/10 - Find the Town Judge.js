/**
 * @param {number} N
 * @param {number[][]} trust
 * @return {number}
 */
var findJudge = function (N, trust) {
    const trustedBy = {};
    const trustTo = {};
    let ans = N == 1 && trust.length == 0 ? 1 : -1;
    [...trust].forEach(trusted => {
        if (!trustedBy[trusted[1]]) {
            trustedBy[trusted[1]] = {};
        }
        if (!trustTo[trusted[0]]) {
            trustTo[trusted[0]] = {};
        }
        if (trusted[1] != trusted[0]) {
            trustedBy[trusted[1]][trusted[0]] = 1;
            trustTo[trusted[0]][trusted[1]] = 1;
        }
    });
    Object.keys(trustedBy).forEach(person => {
        if (Object.keys(trustedBy[person]).length == N - 1 && !trustTo[person]) {
            ans = person;
        }
    });
    return ans;
};
