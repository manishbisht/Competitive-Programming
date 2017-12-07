dp = [0] * (100001)
for i in xrange(1, 100001):
    for j in xrange(i, 100001, i):
        dp[j] += i

n = int(raw_input())

while n != 0:
    ans = -1
    if n in dp:
        ans = len(dp) - 1 - dp[::-1].index(n)
    print ans
    n = int(raw_input())
