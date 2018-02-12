# Adjacency Matrix Graph Class
class Graph:
    # Constructor
    def __init__(self, size):
        self.data = []
        for i in xrange(size):
            temp = []
            for j in xrange(size):
                temp.append(0)
            self.data.append(temp)

    # Add the vertex in the graph
    def add_vertex(self, u, v):
        self.data[u][v] = 1

    # Print graph
    def print_graph(self):
        print self.data

    # BFS
    def bfs(self, source):
        path = []
        q = [source]
        visited = []
        for i in xrange(len(self.data)):
            visited.append(0)
        visited[source] = 1
        path.append(source)
        while len(q) > 0:
            v = q.pop(0)
            for i in xrange(len(self.data[v])):
                if visited[i] == 0 and self.data[v][i] == 1:
                    q.append(i)
                    visited[i] = 1
                    path.append(i)
        return path

AdjacencyMatrixGraph = Graph(8)
AdjacencyMatrixGraph.print_graph()
AdjacencyMatrixGraph.add_vertex(0, 1)
AdjacencyMatrixGraph.add_vertex(0, 2)
AdjacencyMatrixGraph.add_vertex(0, 3)
AdjacencyMatrixGraph.add_vertex(1, 4)
AdjacencyMatrixGraph.add_vertex(1, 5)
AdjacencyMatrixGraph.add_vertex(2, 6)
AdjacencyMatrixGraph.add_vertex(2, 7)
AdjacencyMatrixGraph.add_vertex(3, 7)
AdjacencyMatrixGraph.print_graph()
print AdjacencyMatrixGraph.bfs(0)

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

    # Print graph
    def print_graph(self):
        print self.data

    # BFS
    def bfs(self, source, nodes):
        path = []
        q = [source]
        visited = {}
        for node in nodes:
            visited[node] = 0
        visited[source] = 1
        path.append(source)
        while len(q) > 0:
            v = q.pop(0)
            for i in xrange(len(self.data[v])):
                if visited[self.data[v][i]] == 0:
                    q.append(self.data[v][i])
                    visited[self.data[v][i]] = 1
                    path.append(self.data[v][i])
        return path


AdjacencyListGraph = ListGraph(range(8))
AdjacencyListGraph.print_graph()
AdjacencyListGraph.add_vertex(0, 1)
AdjacencyListGraph.add_vertex(0, 2)
AdjacencyListGraph.add_vertex(0, 3)
AdjacencyListGraph.add_vertex(1, 4)
AdjacencyListGraph.add_vertex(1, 5)
AdjacencyListGraph.add_vertex(2, 6)
AdjacencyListGraph.add_vertex(2, 7)
AdjacencyListGraph.add_vertex(3, 7)
AdjacencyListGraph.print_graph()
print AdjacencyListGraph.bfs(0, range(8))