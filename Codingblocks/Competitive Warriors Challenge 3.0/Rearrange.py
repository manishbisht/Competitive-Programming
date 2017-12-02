n = int(raw_input())
data = [int(i) for i in raw_input().split()]
for i in xrange(0, n / 2, 2):
    temp = data[i]
    data[i] = data[n - i - 1]
    data[n - i - 1] = temp
for i in data:
    print i,
