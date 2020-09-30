# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import OrderedDict
d=OrderedDict()
n=int(input())

for i in range(n):
    item,space,quantity=input().rpartition(" ")
    d[item]=d.get(item,0)+int(quantity)
for item,quantity in d.items():
    print(item,quantity)    
