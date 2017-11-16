n = int(raw_input())
data = [int(i) for i in raw_input().split()]
q = int(raw_input())
for i in xrange(q):
    x = int(raw_input())
    if x in data:
        print data.index(x),
        print len(data) - 1 - data[::-1].index(x)
    else:
        print -1,
        print -1
