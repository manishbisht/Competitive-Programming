def answer(n):
    prime = [True for i in xrange(n+1)]
    prime[0] = False
    prime[1] = False
    p = 2
    while p * p <= n:
        if prime[p]:
            for i in xrange(p * 2, n+1, p):
                prime[i] = False
        p += 1
    ans = []
    return prime
        
     
tprime = answer(999983)

n = int(raw_input().strip())
data = [int(i) for i in raw_input().split()]
for i in data:
    x = int(i ** 0.5)
    if tprime[x] and x * x == i:
        print "YES"
    else:
        print "NO"
    
