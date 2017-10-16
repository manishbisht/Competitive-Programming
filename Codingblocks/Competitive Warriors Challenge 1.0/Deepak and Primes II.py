def SieveOfEratosthenes(n):
    prime = [True for i in xrange(n+1)]
    prime[0] = False
    prime[1] = False
    p = 2
    while (p * p <= n):
        if (prime[p] == True):
            for i in range(p * 2, n+1, p):
                prime[i] = False
        p += 1
    return prime
  
prime = SieveOfEratosthenes(15000000)
n = int(raw_input())
for i in xrange(n):
    data = [int(j) for j in raw_input().split()]
    for j in xrange(data[0], data[1]):
        if prime[j]:
            print j
    print ''
