t = int(raw_input().strip())
for i in xrange(t):
    data = [float(j) for j in raw_input().strip().split()]
    if ((2 ** 0.5) * data[0]) / data[1] > (data[0] * 2) / data[2]:
        print "Elevator"
    else:
        print "Stairs"
