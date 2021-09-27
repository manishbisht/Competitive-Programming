/**
 * @param { Array } arr
 * @param { number } depth
 * @returns { Array }
 */
function flat(arr, depth = 1) {
    return arr.reduce((acc, item) => {
        if (depth && Array.isArray(item)) {
            return [...acc, ...flat(item, depth - 1)];
        }
        return [...acc, item];
    }, []);
}
