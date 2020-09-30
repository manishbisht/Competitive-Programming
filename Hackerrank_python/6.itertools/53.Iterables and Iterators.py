# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import*
N = int(input())
elements=input().split()
K=int(input())
count, total = 0, 0

for i in combinations(elements, K):
    count += 'a' in i
    total += 1

print (count / total)
