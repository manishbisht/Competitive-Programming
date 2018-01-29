# Problem 1

Note: All information provided during the recruiting process is confidential. Any unauthorized use, disclosure or distribution of information is prohibited, including, but not limited to, discussion with others and/or posting on websites or public message boards.

# Problem description
You are in charge of processing the results of a computer science test. Each student is scored between 0 and 100 inclusive. Your task is to calculate the "standardized score" for each student.

The standardized score is calculated using the following formula. Suppose there are N test scores, X1, X2, ..., XN. The average score µ, the variance V, and the standardized score, Si, for the i-th student are defined as

µ := (X1 + X2 + ... + XN) / N
V := {(X1 - µ)2 + (X2 - µ)2 + ... + (XN - µ)2} / N
Si := 50 + 10 * (Xi - µ) / V1/2
Note that Si is defined as 50 if V = 0, and divisions in the above formulas are not integer divisions but decimal divisions. Therefore, 3 / 2 is 1.5 rather than 1.

Your task is to calculate the standardized score for each student when you are given X1, X2, ..., XN.

## Input
Test cases will be provided in the following multiline text format, using only half width characters. The first line contains one integer, C, which is the number of test cases that will follow. The second line is blank. From the third line onwards, the test cases separated by blank lines will follow. Each test case has the following format.

N
X1 X2 ... XN
N is the number of students and X1, X2, ..., XN are the scores of each student. X1, X2, ..., XN are separated by one space character. All scores are integers.

## Limits
Number of test cases: 1 <= C <= 111
Number of students: 1 <= N <= 100
Score of each student: 0 <= Xi <= 100

## Output
For each test case, output one line containing the test case index, starting from 1, followed by the standardized scores S1, S2, ..., SN, separated by a space.

The resulting line should be in this format, using only half-width characters:

Case #i: S1 S2 ... SN
where i is the index of the test case, and S1, S2, ..., SN are standardized scores of students. You can output an arbitrary number of digits after the decimal point provided the error of the value is no greater than 0.001.

## Sample input
4
2
50 70
3
80 90 100
1
10
2
60 60

### Output for sample input
Case #1: 40 60
Case #2: 37.7525512860841 50.0 62.2474487139159
Case #3: 50
Case #4: 50.0 50.0000000000000000
