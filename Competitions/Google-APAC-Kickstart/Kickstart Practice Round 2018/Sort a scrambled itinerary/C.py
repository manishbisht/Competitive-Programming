f = open('C-large-practice.in')
o = open('output-large.txt', 'w')
t = int(f.readline().strip())
for i in xrange(1, t + 1):
    o.write("Case #{}: ".format(i))
    n = int(f.readline().strip())
    stations = {}
    source = ''
    for j in xrange(n):
        source = f.readline().strip()
        stations[source] = f.readline().strip()
    for x in stations.keys():
        if x not in stations.values():
            source = x
            break
    while stations.has_key(source):
        o.write("{}-{} ".format(source, stations[source]))
        source = stations[source]
    o.write("\n")
