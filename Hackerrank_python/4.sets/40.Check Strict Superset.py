# Enter your code here. Read input from STDIN. Print output to STDOUT
A=set(map(int,input().split()))
T=int(input())

for _ in range(T):
    superset1=set(map(int,input().split()))
    superset2=set(map(int,input().split()))
    break
if A.issuperset(superset1) and A.issuperset(superset2):
    print("True")
else:
    print("False")
