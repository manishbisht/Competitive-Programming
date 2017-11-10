n = int(raw_input())
res = {}
for i in xrange(n):
    x = int(raw_input())
    if x not in res:
        ans = 0
        if x == 1:
            ans = -1
        else:
            for j in xrange(1, int(x ** 0.5) + 1):
                if x % j == 0:
                    if j % 2 == 0:
                        ans += j
                    else:
                        ans -= j
                    if (x / j) % 2 == 0:
                        ans += (x / j)
                    else:
                        ans -= (x / j)
            t = int(x ** 0.5)
            if t * t == x:
                if x % 2 == 0:
                    ans -= t
                else:
                    ans += t
        res[x] = ans
    print res[x]
