t = int(raw_input().strip())
for i in xrange(t):
    n = int(raw_input().strip())
    data = [int(j) for j in raw_input().strip().split()]
    ans = 0
    for j in xrange(n - 1):
        for k in xrange(j + 1, n):
            if data[j] | data[k] <= max(data[j], data[k]):
                ans += 1
    print ans
