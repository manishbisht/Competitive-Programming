# Introduction
A graph is a data structure that consists of 2 components.

1. A finite set of vertices called nodes.
2. A finite set of ordered pair(u, v) called edges.

# Graph Representation
1. Adjacency Matrix
2. Adjacency List

## Adjacency Matrix
It is a 2D array of size V x V (V = Number of vertices)

- M[i][j] = 1 if pair(i, j) exists
- M[i][j] = 0 otherwise
- Complexity:
  - Space: `O(V ** 2)`
  - Check Edge: `O(1)`

## Adjacency List
It is the array of linked list (dictionary of list in python).

- Complexity:
  - Space: `O(V + E)`
