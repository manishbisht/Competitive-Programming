import numpy as np
#n,m=map(int,input().split())#this one also correct
n,m=np.array(input().split(),int)
np.set_printoptions(legacy='1.13')
print(np.eye(n,m))


