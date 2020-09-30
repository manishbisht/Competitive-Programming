import numpy
n=int(input())
numpy.set_printoptions(legacy='1.13')
arr1=([list(map(float,input().split()))for _ in range(n)])
print (numpy.linalg.det(arr1))



