# Enter your code here. Read input from STDIN. Print output to STDOUT
N=int(input())
x=input().split()
#N,n = int(raw_input()),raw_input().split()
print (all([int(i)>0 for i in x]) and any([j == j[::-1] for j in x]))

