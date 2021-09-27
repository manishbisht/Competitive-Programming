/**
 * @param {number[]} stones
 * @return {number}
 */
var lastStoneWeight = function (stones) {
    while (stones.length > 1) {
        stones.sort((a, b) => b - a);
        let a = stones.shift();
        if (a == stones[0]) {
            stones.shift();
        } else {
            stones[0] = a - stones[0];
        }
        console.log(stones);
    }

    return stones.length > 0 ? stones[0] : 0;
};
