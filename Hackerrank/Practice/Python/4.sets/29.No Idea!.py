# Enter your code here. Read input from STDIN. Print output to STDOUT
n,m=map(int,input().split())
arry=map(int,input().split())
A=set(map(int,input().split()))
B=set(map(int,input().split()))
print(sum((i in A)-(i in B)for i in arry))
