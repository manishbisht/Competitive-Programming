from itertools import permutations
x=input().split()
s,p=x[0],int(x[1])
k=permutations(s,p)
for i in sorted(k):
    print(*i,sep="")
