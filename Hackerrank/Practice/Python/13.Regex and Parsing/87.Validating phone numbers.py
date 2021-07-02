# Enter your code here. Read input from STDIN. Print output to STDOUT
import re
for i in range(int(input())):
    x=input()
    
    if re.match(r"[7,8,9]\d{9}$",x):
        print("YES")
    else:
        print("NO")
'''
[789]\d{9}$

The above statement is validating the number/count of digits is 10 or not also

one digit out of [7,8,9] ==> One digit count done \d means any number of digits but here we used \d{9} which means 9 digits

previously 1 digit and later on 9 digits ==> total 10 digits were counted and validated

if you want to make a phone number with 11 digit validation try below and check so that doubts will get resolved

[789]\d{10}$
'''        
