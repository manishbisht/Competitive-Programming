n = int(raw_input())
data = [int(i) for i in raw_input().split()]
data = sorted(data)
ans = 0
for i in xrange(0, n, 2):
    if data[i] != data[i + 1]:
        print str(data[i]),
        i -= 1
        ans += 1
if ans != 2:
    print str(data[n-1]) + " ",
