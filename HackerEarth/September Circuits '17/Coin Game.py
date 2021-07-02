def ans(n):
    count = 0
    while n % 2 == 0:
        count += 1
        n /= 2
    return count
t = int(raw_input())
for i in xrange(t):
    n = int(raw_input())
    data = [int(j) for j in raw_input().strip().split()]
    count = 0
    for j in xrange(n):
        count += ans(data[j])
    if count % 2 == 0:
        print "Alan"
    else:
        print "Charlie"