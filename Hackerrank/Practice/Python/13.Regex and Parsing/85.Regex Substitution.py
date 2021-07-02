# Enter your code here. Read input from STDIN. Print output to STDOUT
import re

for _ in range(int(input())):
        s = input()
        s = re.sub(r" \&\&(?= )", " and",s)
        s = re.sub(r" \|\|(?= )", " or", s)
        print(s)
'''
for _ in range(int(input())):
    line = input()
    
    while ' && ' in line or ' || ' in line:
        line = line.replace(" && ", " and ").replace(" || ", " or ")
    
    print(line)  
'''   
      
