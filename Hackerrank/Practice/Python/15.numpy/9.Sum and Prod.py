import numpy
import numpy as np 
n,m = map(int,input().split())
arr = np.array([input().split() for i in range(n)], int)
x=np.sum(arr,axis=0)
print(np.prod(x))



