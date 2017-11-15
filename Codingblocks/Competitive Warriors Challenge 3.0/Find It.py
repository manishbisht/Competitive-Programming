n = int(raw_input())
data = {}
for i in xrange(n):
    x = int(raw_input())
    if x in data:
        data[x] += 1
    else:
        data[x] = 1
k = int(raw_input())
a = {}
for i in xrange(k):
    x = int(raw_input())
    if x not in a:
        ans = 0
        j = 1
        while x * j <= 10 ** 5:
            if x * j in data:
                ans += data[x * j]
            j += 1
        a[x] = ans
    print a[x]
