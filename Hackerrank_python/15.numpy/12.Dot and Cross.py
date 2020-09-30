import numpy
n=int(input())
arr1=([list(map(int,input().split()))for _ in range(n)])
arr2=([list(map(int,input().split()))for _ in range(n)])
print(numpy.dot(arr1,arr2))



