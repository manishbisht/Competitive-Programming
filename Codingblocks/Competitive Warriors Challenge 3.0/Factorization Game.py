prime = [True] * (1000002)
tprime = [0] * (1000002)
count = [0] * (1000002)
p = 2
while (p <= 1000001):
    if (prime[p] == True):
        for i in xrange(p, 1000002, p):
            prime[i] = False
            if tprime[i] == 0:
                tprime[i] = p
    p += 1

t = int(raw_input())
for i in xrange(t):
    n = int(raw_input())
    data = [int(j) for j in raw_input().split()]
    for j in xrange(1000002):
        count[j] = 0
    for x in data:
        while x > 1:
            count[tprime[x]] += 1
            x /= tprime[x]
    ans = 0
    for j in xrange(1, 1000001):
        ans ^= count[j]
    if ans > 0:
        print 'Mancunian'
    else:
        print 'Liverbird'
