from itertools import *

x = input().split()
s,p=x[0],int(x[1])

for l in range(1,p+1):
    for c in combinations (sorted(s),l):
        print(*c,sep="")   
