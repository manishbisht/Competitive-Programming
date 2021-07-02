l=list(map(int,input("Enter The Numbers").split()))
h=[]
for o in l:
    s=1
    for i in range(0,len(l)):
        if o==l[i]:
            continue
        else:
            s=s*l[i]
    h.append(s)
