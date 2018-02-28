f = open('A-large.in')
o = open('output-large.txt', 'w')
t = int(f.readline().strip())
for i in xrange(1, t + 1):
    o.write("Case #{}: ".format(i))
    n = int(f.readline().strip())
    x = f.readline().strip()
    y = f.readline().strip()
    ans = x + '-' + y
    for j in xrange(n - 1):
        x = f.readline().strip()
        y = f.readline().strip()
    o.write("\n")
