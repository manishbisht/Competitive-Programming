from itertools import product
A=list(map(int,input().split()))
B=list(map(int,input().split()))
print(*product(A,B))
