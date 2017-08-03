import math
def check(num):
    n = int(math.sqrt(num))
    return n*n == num
fab = []
count = 1
for i in xrange(1, 100005):
    if check(5 * i * i + 4) or check(5 * i * i - 4):
        fab.append(count)
        count += 1
    else:
        fab.append(0)
n = int(raw_input())
data = [int(i) for i in raw_input().split()]
ans = 0
for i in xrange(n):
    ans = ans + fab[data[i]-1]
print ans