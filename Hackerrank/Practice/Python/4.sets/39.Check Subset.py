# Enter your code here. Read input from STDIN. Print output to STDOUT

T=int(input())
for i in range(T):
    element1=int(input())
    A=set(map(int,input().split()))
    element2=int(input())
    B=set(map(int,input().split()))
    if A.issubset(B):
        print("True")
    else:
        print("False")
