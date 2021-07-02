t = int(raw_input().strip())
for i in xrange(t):
    data = [int(j) for j in raw_input().strip().split()]
    data.remove(len(data)-1)
    print max(data)