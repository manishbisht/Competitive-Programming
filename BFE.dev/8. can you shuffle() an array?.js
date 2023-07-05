/**
 * @param {any[]} arr
 */
function shuffle(arr) {
    for (let i = 0; i < arr.length; i++) {
        const j = i + Math.floor(Math.random() * (arr.length - i));
        [arr[i], arr[j]] = [arr[j], arr[i]];
    }
}
