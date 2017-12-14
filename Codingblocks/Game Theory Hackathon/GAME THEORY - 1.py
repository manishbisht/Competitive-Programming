t = int(raw_input())
for i in xrange(t):
    data = [int(j) for j in raw_input().split()]
    n = data[0]
    m = data[1]
    if n % 2 == 0:
        print "2"
    else:
        print "1"