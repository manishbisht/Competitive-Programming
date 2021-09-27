/**
 * https://leetcode.com/problems/accounts-merge/
 * @param {string[][]} accounts
 * @return {string[][]}
 */
var accountsMerge = function (accounts) {
    const name = {};
    const graph = {};
    accounts.forEach((account, index) => {
        account.forEach((item, index) => {
            if (index !== 0) {
                if (graph[account[1]]) {
                    graph[account[1]].push(item);
                } else {
                    graph[account[1]] = [item];
                }
                if (graph[item]) {
                    graph[item].push(account[1]);
                } else {
                    graph[item] = [account[1]];
                }
                name[item] = account[0];
            }
        });
    });

    visited = {};

    let paths = Object.keys(graph).map(item => {
        if (!visited[item]) {
            path = {
                [item]: true,
            };
            solve(graph, item);
            return path;
        }
    });

    return paths
        .filter(item => (item ? true : false))
        .map(item => {
            const emails = Object.keys(item);
            emails.sort();
            return [name[emails[0]], ...emails];
        });
};

let visited;

let path;

const solve = (graph, start) => {
    if (graph[start]?.length) {
        visited[start] = true;
        graph[start].forEach(item => {
            if (!visited[item]) {
                path[item] = true;
                solve(graph, item);
            }
        });
    }
};
