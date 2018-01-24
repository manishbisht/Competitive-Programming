t = int(raw_input())
for i in xrange(t):
    data = [int(j) for j in raw_input().split()]
    n = data[0]
    x = data[1]
    data = [int(j) for j in raw_input().split()]
    if data[-1] == x:
        minimum = 0
        maximum = 1000000000000
        for k in data:
            if k < maximum and k > x:
                maximum = k
            elif k > minimum and k < x:
                minimum = k
            elif k == x:
                minimum = k
                maximum = k
            else:
                maximum = -1
                break
        if maximum == -1:
            print "NO"
        else:
            print "YES"
    else:
        print "NO"