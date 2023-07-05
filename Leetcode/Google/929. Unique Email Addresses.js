/**
 * @param {string[]} emails
 * @return {number}
 */
var numUniqueEmails = function (emails) {
    const uniqueEmails = {};
    emails.forEach(email => {
        const [username, domainName] = email.split("@");
        uniqueEmails[`${username.split("+")[0].replaceAll(".", "")}@${domainName}`] = 1;
    });

    return Object.keys(uniqueEmails).length;
};
