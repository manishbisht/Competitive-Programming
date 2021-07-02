import numpy as maa
n,m=map(int,input().split())
maa.set_printoptions(legacy='1.13')
arr=([list(map(int,input().split()))for _ in range(n)])
print(maa.mean(arr,axis=1))
print(maa.var(arr,axis=0))
print(maa.std(arr,axis=None))
