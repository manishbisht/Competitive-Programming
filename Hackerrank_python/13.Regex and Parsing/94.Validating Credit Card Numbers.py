# Enter your code here. Read input from STDIN. Print output to STDOUT

import re
for _ in range(int(input())):
    x=input()
    if re.search(r"^[456]([\d]{15}|[\d]{3}(-[\d]{4}){3})$", x) and not re.search(r"([\d])\1\1\1", x.replace("-", "")):
        print("Valid")
    else:
        print("Invalid")
'''
import re
TESTER = re.compile(
    r"^"
    r"(?!.*(\d)(-?\1){3})"
    r"[456]"
    r"\d{3}"
    r"(?:-?\d{4}){3}"
    r"$")
for _ in range(int(input().strip())):
    print("Valid" if TESTER.search(input().strip()) else "Invalid")        
 '''       
    
