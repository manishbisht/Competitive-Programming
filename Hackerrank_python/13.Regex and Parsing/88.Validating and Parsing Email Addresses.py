# Enter your code here. Read input from STDIN. Print output to STDOUT
import re
n = int(input())
for _ in range(n):
    x, y = input().split()
    m = re.match(r'^<[a-zA-Z][\w\-\.\_]+@[a-zA-Z]+\.[a-zA-Z]{1,3}>$', y)
    if m:
        print(x,y)
#(r'^<[a-zA-Z0-9_.-]+@[a-zA-Z]+\.[a-zA-Z]{1,3}>$', y)
