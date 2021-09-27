Note: All information provided during the recruiting process is confidential. Any unauthorized use, disclosure or distribution of information is prohibited, including, but not limited to, discussion with others and/or posting on websites or public message boards.

Problem description
You have N programs and want to run each of them exactly once. Each program takes exactly one hour to complete. You can run multiple programs in parallel, but some programs depend on the output from one or more other programs and thus can be run only after their completion. Given the dependency between programs, please compute the minimum number of hours you need to run all programs.

Input
Test cases will be provided in the following format, using only ASCII characters. The first line contains one integer, C, which is the number of test cases that will follow. The second line is blank. From third line onwards, multiple test cases separated by a blank line will follow. Each test case has the following format:

N M
A1 B1
A2 B2
…
AM BM
N is the number of programs you want to run, and M is the number of dependencies between programs. Each of the following M lines specifies one dependency; Ai-th program needs to be completed before you run Bi-th program.

All tokens in a line are separated by a single space.

Guarantees
All numbers in the input are integers.
Number of test cases: 1 <= C <= 50
Number of programs: 1 <= N <= 20
Number of dependencies: 0 <= M <= N\*(N-1)/2
1 <= Ai <= N, 1 <= Bi <= N
There is a way to run each program exactly once.
There is no circular dependency, that is, if i-th program depends on j-th program, j-th program does not depend on i-th program directly or indirectly.
No two dependencies are the same: (Ai, Bi) != (Aj, Bj) if i != j.
Note: You can assume that the input data is valid and satisfies all constraints. Your solution does not need to include error handling code.

Output
For each test case, output a result in the following format:

Case #k: H
where k is the number of the test case, starting from 1, and H indicates how many hours you need to run all programs.

All tokens in the output should be separated by a single space.

Sample input
File: task2-sample-input.txt (You can download the file using right click -> "Save this link as" or similar)

5

3 2
1 2
2 3

3 2
2 3
2 1

5 5
1 3
3 4
2 3
3 5
1 4

4 2
1 2
4 3

2 0
Output for sample input
File: task2-sample-output.txt (You can download the file using right click -> "Save this link as" or similar)

Case #1: 3
Case #2: 2
Case #3: 3
Case #4: 2
Case #5: 1
Test input
Please submit output for this input in the submission form below.

File: task2-test-input.txt (You can download the file using right click -> "Save this link as" or similar)
