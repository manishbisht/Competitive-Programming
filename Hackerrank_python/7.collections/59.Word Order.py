# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import*
d={}
for i in range(int(input())):
    word=input()
    if word in d:
        d[word]+=1
    else:
        d[word]=1
print(len(d))
print(*d.values())  
