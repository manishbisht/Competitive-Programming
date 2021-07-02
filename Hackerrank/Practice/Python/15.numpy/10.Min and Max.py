import numpy as arr
n,m=map(int,input().split())
ar=([list(map(int,input().split()))for _ in range(n)])
arr1=arr.min(ar,axis=1)
print(max(arr1))
