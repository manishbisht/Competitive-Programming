Note: All information provided during the recruiting process is confidential. Any unauthorized use, disclosure or distribution of information is prohibited, including, but not limited to, discussion with others and/or posting on websites or public message boards.

Problem description
You are given a list of points on a 2D plane. Your task is to find the smallest perimeter (sum of edge lengths) among all triangles formed by selecting three points from the list. Note that edge length between two points is defined by this formula: ((x1-x2)2+(y1-y2)2)1/2.

Input
Test cases will be provided in the following multiline text format, using only ASCII characters. The first line contains one integer, C, which is the number of test cases that will follow. The second line is blank. From the third line onwards, the test cases separated by a blank line will follow.

Each test case has the following format.

N
X1 Y1
X2 Y2
...
XN YN
N is the number of points, and Xi and Yi are x and y coordinates of the i-th point. All tokens in a line are separated by a single space.

Guarantees
All numbers in the input are integers.
Number of test cases: 1 <= C <= 40
Number of points in a test case: 3 <= N <= 40
X and Y coordinates of each point: 0 <= Xi <= 100, 0 <= Yi <= 100
No two points are at the same place.
No three points will lie on the same straight line.
Note: You can assume that the input data is valid and satisfies all constraints. Your solution does not need to include error handling code.
Output
For each test case, output the result in the following format:

Case #k: D
where k is the index of the test case, starting from 1, and D is minimum perimeter of a triangle. You can output an arbitrary number of digits after the decimal point provided that the error of the value is no greater than 0.001. All tokens in the output should be separated by a single space.

Sample input
File: task1-sample-input.txt (You can download the file using right click -> "Save this link as" or similar)

6

3
1 2
2 1
0 0

3
1 2
2 2
2 1

5
42 74
52 19
38 88
32 53
17 37

5
43 24
55 73
8 85
89 71
26 84

5
78 56
83 50
7 83
75 17
70 30

5
40 11
95 77
51 74
10 32
53 62
Output for sample input
File: task1-sample-output.txt (You can download the file using right click -> "Save this link as" or similar)

Case #1: 5.886
Case #2: 3.41421356237
Case #3: 73.330
Case #4: 97.55161
Case #5: 58.86691157
Case #6: 100.865
Test input
Please submit output of this input for the submission form below.

File: task1-test-input.txt (You can download the file using right click -> "Save this link as" or similar)
