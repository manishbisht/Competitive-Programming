/**
 * https://leetcode.com/problems/all-paths-from-source-lead-to-destination/
 * @param {number} n
 * @param {number[][]} edges
 * @param {number} source
 * @param {number} destination
 * @return {boolean}
 */
var leadsToDestination = function (n, edges, source, destination) {
    visited = {};

    const graph = buildGraph(edges);

    return solve(graph, source, destination);
};

const buildGraph = edges => {
    return edges.reduce((acc, item) => {
        if (acc[item[0]]) {
            acc[item[0]].push(item[1]);
        } else {
            acc[item[0]] = [item[1]];
        }
        return acc;
    }, {});
};

let visited;

const solve = (graph, source, destination) => {
    if (visited[source]) {
        return visited[source] === 2;
    }

    if ((graph[source] || []).length === 0) {
        return source === destination;
    }

    if (graph[source]) {
        visited[source] = 1;

        for (let i = 0; i < graph[source].length; i++) {
            if (!solve(graph, graph[source][i], destination)) {
                return false;
            }
        }

        visited[source] = 2;

        return true;
    }

    return false;
};
