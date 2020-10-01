# Enter your code here. Read input from STDIN. Print output to STDOUT

'''
S = input()
k = input()
import re
pattern = re.compile(k)
r = pattern.search(S)
if not r: print((-1, -1))
while r:
    print ('({0}, {1})'.format(r.start(), r.end() - 1))
    r = pattern.search(S,r.start() + 1)
'''
import re
s = input()
k = input()
index = 0

if re.search(k, s):
    while index+len(k) < len(s):
        
        m = re.search(k, s[index:]) #begins search with new index
        
        print("({0}, {1})".format(index+m.start(), index+m.end()-1)) 
    
        
        index += m.start() + 1
       # c+=1
        #print(index) #assign new index by +1 
#elif re.search(k, s)==None:
else:
    print((-1,-1))  
