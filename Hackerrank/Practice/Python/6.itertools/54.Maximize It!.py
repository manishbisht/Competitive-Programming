# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import*
m,n=map(int,input().split())
l1=list()
for i in range(m):
    l=list(map(int,input().split()))[1:]
    l1.append(l)
final_result=max(map(lambda x:sum(i*i for i in x)%n,product(*l1)))
print(final_result)   
