# Enter your code here. Read input from STDIN. Print output to STDOUTi
import re
sub_string=re.findall(r'(?<=[qwrtypsdfghjklzxcvbnm])([aeiou]{2,})(?=[qwrtypsdfghjklzxcvbnm])',input(),re.I)
'''
if sub_string:
    for s in sub_string:
        print(s)
else:
    print(-1)
'''
print('\n'.join(sub_string or ['-1']))  
#print('\n'.join(sub_string or ['-1']))  


