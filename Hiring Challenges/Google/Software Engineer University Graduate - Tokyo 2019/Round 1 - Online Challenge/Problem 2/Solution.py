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
    def bfs(self, source, visited, in_degree):
        path = []
        q = [source]
        visited[source] = 1
        path.append(source)
        while len(q) > 0:
            v = q.pop(0)
            for i in xrange(len(self.data[v])):
                in_degree[self.data[v][i]] -= 1
                if visited[self.data[v][i]] == 0 and in_degree[self.data[v][i]] == 0:
                    q.append(self.data[v][i])
                    visited[self.data[v][i]] = 1
                    path.append(self.data[v][i])
        return path

    # Find the connected group
    def find_group(self, source, visited, in_degree):
        return len(self.bfs(source, visited, in_degree))

    def topologicalSortUtil(self, v, visited, stack):

        # Mark the current node as visited.
        visited[v] = True

        # Recur for all the vertices adjacent to this vertex
        if v in self.graph.keys():
            for node, weight in self.graph[v]:
                if visited[node] == False:
                    self.topologicalSortUtil(node, visited, stack)

        # Push current vertex to stack which stores topological sort
        stack.append(v)

    def shortestPath(self, s):
        visited = {}
        for node in nodes:
            visited[node] = 0
        stack = []

        # Call the recursive helper function to store Topological
        # Sort starting from source vertice
        for i in range(self.V):
            if visited[i] == False:
                self.topologicalSortUtil(s, visited, stack)

        # Initialize distances to all vertices as infinite and
        # distance to source as 0
        dist = [float("Inf")] * (self.V)
        dist[s] = 0

        # Process vertices in topological order
        while stack:

            # Get the next vertex from topological order
            i = stack.pop()

            # Update distances of all adjacent vertices
            for node, weight in self.graph[i]:
                if dist[node] > dist[i] + weight:
                    dist[node] = dist[i] + weight

        # Print the calculated shortest distances
        for i in range(self.V):
            print ("%d" % dist[i]) if dist[i] != float("Inf") else  "Inf",


f = open('sample-input.txt')
o = open('sample-output.txt', 'w')
t = int(f.readline().strip())
n = f.readline()
for i in xrange(1, t + 1):
    o.write("Case #{}: ".format(i))
    nodes = set()
    edges = []
    while True:
        n = f.readline().strip()
        if n == '':
            break
        x = [int(j) for j in n.split()]
        edges.append(x)
        nodes.add(x[0])
        nodes.add(x[1])
    AdjacencyMatrixGraph = ListGraph(nodes)
    visited = {}
    in_degree = {}
    for node in nodes:
        visited[node] = 0
        in_degree[node] = 0
    for edge in edges:
        AdjacencyMatrixGraph.add_vertex(edge[0], edge[1])
        in_degree[edge[1]] += 1
    ans = []
    for node in nodes:
        if visited[node] == 0 and in_degree[node] == 0:
            ans.append(AdjacencyMatrixGraph.find_group(node, visited, in_degree))
    print("\n")
    o.write("{}".format(max(ans)))
    o.write("\n")
