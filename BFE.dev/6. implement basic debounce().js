/**
 * @param {Function} func
 * @param {number} wait
 */
function debounce(func, wait) {
    let timer;
    return function (...args) {
        clearTimeout(timer);
        timer = setTimeout(() => {
            func(...args);
            timer = null;
        }, wait);
    };
}
