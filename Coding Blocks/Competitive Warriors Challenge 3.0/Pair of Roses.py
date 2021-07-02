t = int(raw_input())
for i in xrange(t):
    try:
        n = int(raw_input())
    except:
        n = int(raw_input())
    data = [int(j) for j in raw_input().split()]
    x = int(raw_input())
    data = sorted(data)
    s = 0
    e = n - 1
    a = 0
    b = 0
    while s < e:
        if data[s] + data[e] == x:
            a = data[s]
            b = data[e]
            s += 1
            e -= 1
        elif data[s] + data[e] < x:
            s += 1
        else:
            e -= 1
    print "Deepak should buy roses whose prices are "+str(a)+" and "+str(b)+"."
