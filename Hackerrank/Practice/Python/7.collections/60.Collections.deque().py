# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import*
d = deque()
n = int(input())
for i in range(n):
    p=input().split()
    if p[0]=="append": 
        d.append(p[1])
    elif p[0]=="appendleft":
        d.appendleft(p[1])
    elif p[0]=="pop":
        d.pop()

        
    else:
        d.popleft()
print(*d)
