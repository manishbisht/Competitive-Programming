def check(data, mid, p):
    c = 0
    for x in data:
        c += (len(dp[x]) - 1 - dp[x][::-1].index(mid)) - dp[x] - 1
        if c >= p:
            return True
    return False
dp = [[0 for i in xrange(1001)] for j in xrange(9)]
for i in xrange(1, 9):
    for j in xrange(1, 1001):
        dp[i][j] = i * j
        dp[i][j] += dp[i][j - 1]
print dp
p = int(raw_input())
data = [int(i) for i in raw_input().split()]
n = data[0]
data = data[1:]
data = sorted(data)
start = 0
end = data[-1] * p
while start < end:
    mid = (start + end) / 2
    if check(data, mid, p):
        end = mid
    else:
        start = mid + 1
print start
