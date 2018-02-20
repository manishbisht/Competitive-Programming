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
    def bfs(self, source, visited):
        path = []
        q = [source]
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

    # Find the connected group
    def find_group(self, source, visited):
        return len(self.bfs(source, visited))

f = open('task2-test-input.txt')
o = open('output.txt', 'w')
t = int(f.readline().strip())
for i in xrange(1, t + 1):
    o.write("Case #{}: ".format(i))
    n = f.readline()
    n = int(f.readline().strip())
    AdjacencyListGraph = ListGraph(range(1, n + 1))
    m = int(f.readline().strip())
    for p in xrange(m):
        x = [int(j) for j in f.readline().strip().split()]
        AdjacencyListGraph.add_vertex(x[0], x[1])
        AdjacencyListGraph.add_vertex(x[1], x[0])
    visited = {}
    for p in xrange(1, n + 1):
        visited[p] = 0
    ans = []
    for p in xrange(1, n + 1):
        if visited[p] == 0:
            ans.append(AdjacencyListGraph.find_group(p, visited))
    ans = sorted(ans, reverse=True)
    for p in ans:
        o.write("{} ".format(p))
    o.write("\n")
