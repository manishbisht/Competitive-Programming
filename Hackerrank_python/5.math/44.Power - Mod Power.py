# Enter your code here. Read input from STDIN. Print output to STDOUT
import math
a=int(input())
b=int(input())
m=int(input())
print(round(math.pow(a,b)))
print(int(math.pow(a,b)%m))#we can use both round() and int()
