# Enter your code here. Read input from STDIN. Print output to STDOUT
import re
for i in range(int(input())):
    x=input()
    #print(bool(re.match([r'^[-+]?[0-9]*.[0-9]+$'],input())))
    print(bool(re.match(r'^[-+]?[0-9]*[.][0-9]*$',x)))
