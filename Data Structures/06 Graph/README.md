# Introduction

A graph is a data structure that consists of 2 components.

1. A finite set of vertices called nodes.
2. A finite set of ordered pair(u, v) called edges.

# Graph Representation

1. Adjacency Matrix
2. Adjacency List

## Adjacency Matrix

It is a 2D array of size V x V (V = Number of vertices)

-   M[i][j] = 1 if pair(i, j) exists
-   M[i][j] = 0 otherwise
-   Complexity:
    -   Space: `O(V ** 2)`
    -   Check Edge: `O(1)`

![](https://www.geeksforgeeks.org/wp-content/uploads/adjacency_matrix_representation.png)

## Adjacency List

It is the array of linked list (dictionary of list in python).

-   Complexity:
    -   Space: `O(V + E)`

![](https://www.geeksforgeeks.org/wp-content/uploads/adjacency_list_representation.png)

# Breadth First Traversal or BFS for a Graph

It is a traversing algorithm that is used to traverse the nodes layerwise. Queue is used in this algorithm.

1. Mark all connected nodes with the current node as visited.
2. Move to the next layer and do 1 again

![](https://he-s3.s3.amazonaws.com/media/uploads/fdec3c2.jpg)

# Depth First Traversal or DFS for a Graph

It is an algorithm for traversing that explores nodes as far as possible along each branch before backtracking. Stack is used in this algorithm.

![](https://he-s3.s3.amazonaws.com/media/uploads/9fa1119.jpg)
