/**
 * @param {number[][]} edges
 * @return {number[]}
 */
var findRedundantConnection = function (edges) {
    let graph = {};
    let ans;

    edges.forEach(edge => {
        visited = {};
        if (dfs(graph, edge[0], edge[1])) {
            ans = edge;
        } else {
            graph = addEdge(graph, edge);
        }
    });

    return ans;
};

const addEdge = (graph, edge) => {
    if (graph[edge[0]]) {
        graph[edge[0]].push(edge[1]);
    } else {
        graph[edge[0]] = [edge[1]];
    }
    if (graph[edge[1]]) {
        graph[edge[1]].push(edge[0]);
    } else {
        graph[edge[1]] = [edge[0]];
    }
    return graph;
};

let visited;

const dfs = (graph, s, d) => {
    if (s === d) {
        return true;
    }

    if (!visited[s] && graph[s]?.length) {
        visited[s] = true;
        for (let i = 0; i < graph[s].length; i++) {
            if (dfs(graph, graph[s][i], d)) {
                return true;
            }
        }
    }

    return false;
};
