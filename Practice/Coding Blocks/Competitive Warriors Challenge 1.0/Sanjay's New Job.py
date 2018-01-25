k = int(raw_input())
n = int(raw_input())
ans = []
for i in xrange(n):
    data = [i for i in raw_input().split()]
    data[1] = int(data[1])
    if data[1] >= k:
        ans.append((data[1], data[0]))
ans = sorted(ans, key=lambda t: (-t[0], t[1]))
for i in ans:
    print i[1] + " " + str(i[0])
