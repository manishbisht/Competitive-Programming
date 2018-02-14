# Adjacency List Graph Class
class ListGraph:
    # Constructor
    def __init__(self, nodes):
        self.data = {}
        for node in nodes:
            self.data[node] = []

    # Add the vertex in the Graph
    def add_vertex(self, u, v):
        self.data[u].append(v)
        self.data[v].append(u)

    # Print graph
    def print_graph(self):
        print self.data

    # DFS
    def dfs(self, source, nodes):
        path = []
        s = [source]
        visited = {}
        for node in nodes:
            visited[node] = 0
        visited[source] = 1
        while len(s) > 0:
            v = s.pop()
            path.append(v)
            for i in self.data[v]:
                if visited[i] == 0:
                    visited[i] = 1
                    s.append(i)
        return path


AdjacencyListGraph = ListGraph(['A', 'B', 'C', 'D', 'E', 'F'])
AdjacencyListGraph.print_graph()
AdjacencyListGraph.add_vertex('A', 'B')
AdjacencyListGraph.add_vertex('A', 'C')
AdjacencyListGraph.add_vertex('B', 'D')
AdjacencyListGraph.add_vertex('C', 'E')
AdjacencyListGraph.add_vertex('E', 'B')
AdjacencyListGraph.add_vertex('D', 'E')
AdjacencyListGraph.add_vertex('D', 'F')
AdjacencyListGraph.add_vertex('E', 'F')
AdjacencyListGraph.print_graph()
print AdjacencyListGraph.dfs('A', ['A', 'B', 'C', 'D', 'E', 'F'])