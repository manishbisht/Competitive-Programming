/**
 * @param {string[][]} message
 * @return {string}
 */
function decode(message) {
    let ans = "";
    let i = 0;
    let j = 0;
    let direction = 1;
    while (j < message.length && i < message[0].length) {
        ans += message[j][i];
        i++;
        if (j === 0) {
            direction = 1;
        }
        if (j + 1 === message.length) {
            direction = -1;
        }
        j += direction;
    }
    return ans;
}
