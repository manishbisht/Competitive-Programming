# Problem #499 [Easy]

This problem was asked by Palantir.

A typical American-style crossword puzzle grid is an N x N matrix with black and white squares, which obeys the following rules:

-   Every white square must be part of an "across" word and a "down" word.
-   No word can be fewer than three letters long.
-   Every white square must be reachable from every other white square.
-   The grid is rotationally symmetric (for example, the colors of the top left and bottom right squares must match).

Write a program to determine whether a given matrix qualifies as a crossword grid.
