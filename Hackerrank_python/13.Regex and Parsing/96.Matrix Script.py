#!/bin/python3
import re
n,m=map(int,input().split())
l=list()
for i in range(n):
    l.append(input())
l=list(zip(*l))   
#print(l) 
s=""
for i in l:
    s=s+"".join(i)
#print(s) 
s=re.sub(r"\b[^a-zA-Z0-9]+\b",r" ",s)
print(s)   
