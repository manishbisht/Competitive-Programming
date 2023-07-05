/**
 * @param {Function} func
 * @param {number} wait
 */
function throttle(func, wait) {
    let waiting;
    let params;

    function callback() {
        if (params) {
            func(...params);
            params = null;
        }
    }

    return function (...args) {
        params = args;
        if (!waiting) {
            callback();
        }

        waiting = setTimeout(() => {
            waiting = null;
            callback();
        }, wait);
    };
}
