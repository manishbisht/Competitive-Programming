# Enter your code here. Read input from STDIN. Print output to STDOUT
M=input()
x=set(map(int,input().split()))
N=input()
y=set(map(int,input().split()))
f=x^y
for i in sorted(f):
    print (i)
