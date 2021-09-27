/**
 * https://leetcode.com/problems/validate-ip-address/
 * @param {string} IP
 * @return {string}
 */
var validIPAddress = function (IP) {
    if (IP.split(".").length === 4) {
        const IPArray = IP.split(".");
        let isValid = true;
        IPArray.forEach(item => {
            if (item.length > 0) {
                for (let i = 0; i < item.length; i++) {
                    if (i === 0 && item.length === 1) {
                    } else if (i === 0 && item.charCodeAt(i) > 48 && item.charCodeAt(i) < 51) {
                    } else if (i !== 0 && item.charCodeAt(i) > 47 && item.charCodeAt(i) < 58) {
                    } else {
                        isValid = false;
                    }
                }
            } else {
                isValid = false;
            }
            if (isValid && parseInt(item) > 255) isValid = false;
        });
        if (isValid) return "IPv4";
    }

    if (IP.split(":").length === 8) {
        const IPArray = IP.split(":");
        let isValid = true;
        IPArray.forEach(item => {
            if (item.length > 0 && item.length < 5) {
                for (let i = 0; i < item.length; i++) {
                    if (item.charCodeAt(i) > 47 && item.charCodeAt(i) < 58) {
                    } else if (item.charCodeAt(i) > 64 && item.charCodeAt(i) < 71) {
                    } else if (item.charCodeAt(i) > 96 && item.charCodeAt(i) < 103) {
                    } else {
                        isValid = false;
                    }
                }
            } else {
                isValid = false;
            }
        });
        if (isValid) return "IPv6";
    }

    return "Neither";
};
