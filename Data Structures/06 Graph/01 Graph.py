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

AdjacencyMatrixGraph = Graph(5)
AdjacencyMatrixGraph.print_graph()
AdjacencyMatrixGraph.add_vertex(0, 1)
AdjacencyMatrixGraph.add_vertex(0, 4)
AdjacencyMatrixGraph.add_vertex(1, 0)
AdjacencyMatrixGraph.add_vertex(1, 2)
AdjacencyMatrixGraph.add_vertex(1, 3)
AdjacencyMatrixGraph.add_vertex(1, 4)
AdjacencyMatrixGraph.add_vertex(2, 1)
AdjacencyMatrixGraph.add_vertex(2, 3)
AdjacencyMatrixGraph.add_vertex(3, 1)
AdjacencyMatrixGraph.add_vertex(3, 2)
AdjacencyMatrixGraph.add_vertex(3, 4)
AdjacencyMatrixGraph.add_vertex(4, 0)
AdjacencyMatrixGraph.add_vertex(4, 1)
AdjacencyMatrixGraph.add_vertex(4, 3)
AdjacencyMatrixGraph.print_graph()