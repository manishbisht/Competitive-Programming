# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import*
N=int(input())
total_mark=0
fields=input().split()
for i in range(N):
    students=namedtuple("k",fields)
    MARKS,CLASS,NAME,ID=input().split()
    x=students(MARKS,CLASS,NAME,ID)
    total_mark+=int(x.MARKS)
print(total_mark/N)
