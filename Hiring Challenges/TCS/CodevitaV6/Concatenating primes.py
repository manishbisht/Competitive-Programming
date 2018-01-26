def Sieve(n):
    prime = [True for i in xrange(n + 1)]
    p = 2
    while p * p <= n:
        if prime[p]:
            for i in xrange(p * 2, n + 1, p):
                prime[i] = False
        p += 1
    return prime

prime = Sieve(8000)
n = int(raw_input())
arr = []
for i in xrange(2, n + 1):
    if prime[i]:
        arr.append(i)
new = set()
for i in xrange(len(arr)):
    for j in xrange(len(arr)):
        new.add(int(str(arr[i]) + str(arr[j])))
count = 0
new = list(new)
for i in xrange(len(new)):
    if prime[new[i]]:
        count += 1
print count
