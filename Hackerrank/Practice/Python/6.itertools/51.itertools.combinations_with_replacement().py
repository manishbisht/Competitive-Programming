# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import combinations_with_replacement
x=input().split()
s,p=x[0],int(x[1])
y=combinations_with_replacement(sorted(s),p)
for i in (y):
    print(*i,sep="")
