n = int(raw_input())
data = [int(i) for i in raw_input().split()]
d = {}
for x in data:
    if x in d:
        d[x] += 1
    else:
        d[x] = 1
data = d
q = int(raw_input())
for i in xrange(q):
    d = [int(j) for j in raw_input().split()]
    count = 0
    for x in data:
        if d[0] % x == 0:
            count += data[x]
        if count >= d[1]:
            break
    if count >= d[1]:
        print "Yes"
    else:
        print "No"
