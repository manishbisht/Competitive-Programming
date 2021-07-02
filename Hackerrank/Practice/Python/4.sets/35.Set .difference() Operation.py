# Enter your code here. Read input from STDIN. Print output to STDOUT
n=int(input())
roll_n=set(map(int,input().split()))
m=int(input())
roll_m=set(map(int,input().split()))
s=roll_n-roll_m
print(len(s))
