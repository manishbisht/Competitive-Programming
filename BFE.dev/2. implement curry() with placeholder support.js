/**
 * @param { (...args: any[]) => any } fn
 * @returns { (...args: any[]) => any }
 */
function curry(fn) {
    return function curried(...args) {
        const filteredArgs = args.slice(0, fn.length).filter(item => item !== curry.placeholder);
        if (filteredArgs.length >= fn.length) {
            return fn(...filteredArgs);
        }

        return (...rest) => {
            const updatedArgs = args.map(item => (item === curry.placeholder && rest.length ? rest.shift() : item));
            return curried(...updatedArgs, ...rest);
        };
    };
}

curry.placeholder = Symbol();
