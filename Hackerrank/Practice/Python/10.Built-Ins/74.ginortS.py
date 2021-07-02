# Enter your code here. Read input from STDIN. Print output to STDOUT
s=input()
lower,upper,odd,even=[],[],[],[]
for i in s:
    if(i.islower()):
        lower.append(ord(i))
    elif(i.isupper()):
        upper.append(ord(i))
        
    elif(int(i)%2==1):
        odd.append(ord(i))
    else:
        even.append(ord(i))
lower.sort(),upper.sort(),odd.sort(),even.sort()
marge=lower+upper+odd+even

for i in marge:
    print(chr(i),end="")
