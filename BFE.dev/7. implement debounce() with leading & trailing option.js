/**
 * @param {Function} func
 * @param {number} wait
 * @param {boolean} option.leading
 * @param {boolean} option.trailing
 */
function debounce(func, wait, option = { leading: false, trailing: true }) {
    let timer;
    let lastArgs;
    return function betterFunction(...args) {
        lastArgs = args;
        clearTimeout(timer);
        if (option.leading && !timer && lastArgs) {
            func(...lastArgs);
            lastArgs = null;
        }
        timer = setTimeout(() => {
            if (option.trailing && lastArgs) {
                func(...lastArgs);
            }
            timer = null;
        }, wait);
    };
}
