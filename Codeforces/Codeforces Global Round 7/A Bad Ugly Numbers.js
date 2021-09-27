const readline = require("readline");
const rl = readline.createInterface(process.stdin, process.stdout);

let lineNo = 0;
let testCases;

const parseProblem = line => {
    if (lineNo === 0) {
        testCases = parseInt(line);
    }
    lineNo++;
};

rl.on("line", function (line) {
    // console.log('Line number: ' + line);
    if (lineNo === 0) {
    }
});
