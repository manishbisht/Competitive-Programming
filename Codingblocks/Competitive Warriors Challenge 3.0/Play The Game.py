def count(n):
    ans = 0
    while n % 2 == 0:
        n /= 2
        ans += 1
    return ans
t = int(raw_input())
for i in xrange(t):
    n = int(raw_input())
    data = [int(j) for j in raw_input().split()]
    ans = 0
    for j in xrange(n):
        ans += count(data[j])
    if ans % 2 == 0:
        print 'Alan'
    else:
        print 'Charlie'
