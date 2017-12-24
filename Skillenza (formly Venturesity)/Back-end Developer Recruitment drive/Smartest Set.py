dp = []
for i in xrange(100005):
    dp.append(bin(i).count("1"))

t = int(raw_input())
for i in xrange(t):
    n = int(raw_input())
    data = [int(j) for j in raw_input().split()]
    ans = {}
    for x in data:
        if dp[x] in ans:
            ans[dp[x]] = min(ans[dp[x]], x)
        else:
            ans[dp[x]] = x
    for x in sorted(ans.keys()):
        print ans[x],
    print ''
