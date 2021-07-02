# Enter your code here. Read input from STDIN. Print output to STOUT
import re
for _ in range(int(input())):
    try:
        re.compile(input())
        print (True)
    except re.error:
        print (False)    
