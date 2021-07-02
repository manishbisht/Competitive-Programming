n = int(input())
s = set(map(int, input().split()))
N=int(input())
for i in range(N):
    p=input().split()
    if p[0]=="pop": 
        s.pop()
    elif p[0]=="discard":
        s.discard(int(p[1]))

        
    else:
        s.remove(int(p[1]))
        
print(sum(s))
 
