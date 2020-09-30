import numpy as num
n, m = map(int, input().split())
array = num.array([input().split() for _ in range(n)], int)
print (array.transpose())
print (array.flatten())



