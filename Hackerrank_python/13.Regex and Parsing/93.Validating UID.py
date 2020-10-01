# Enter your code here. Read input from STDIN. Print output to STDOUT
import re
for i in range(int(input())):
    x=input()
    if bool(re.search(r'(.*[A-Z]){2}',x))and bool(re.search(r'(.*[\d]){3}',x)):
        #if x.isalnum() and len(x)==10: #this is also correct
        if (re.search(r'^[a-zA-Z0-9]{10}$',x)):
        
            
            if re.search(r'.*(.).*\1',x):
                #here .* means any character except line break 
                #here () means capturing group in our case there is two 
                #capturing group so it checks two of it
                #under this() there is . which means means any character except line break
                #
                print("Invalid")
            else:
                print("Valid")
        else:
                print("Invalid")
    else:
        print("Invalid")        

