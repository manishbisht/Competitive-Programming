var processString = function (S) {
    let processedString = "";
    for (let i = 0; i < S.length; i++) {
        if (S[i] === "#") {
            if (processedString.length > 0) {
                processedString = processedString.slice(0, -1);
            }
        } else {
            processedString += S[i];
        }
    }
    return processedString;
};
/**
 * @param {string} S
 * @param {string} T
 * @return {boolean}
 */
var backspaceCompare = function (S, T) {
    return processString(S) === processString(T);
};
