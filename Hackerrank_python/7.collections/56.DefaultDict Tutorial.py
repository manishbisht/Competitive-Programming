from collections import defaultdict
d = defaultdict(list)
l1=[]
n,m=map(int,input().split())
for i in range(n):
    d[input()].append(i+1)
for i in range(m):
    l1=l1+[input()]
for i in l1:
    if i in d:
        print(*(map(str,d[i])))
    else:
        print(-1)
