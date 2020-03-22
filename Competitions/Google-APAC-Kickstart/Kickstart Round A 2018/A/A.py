f = open('sample-input.txt')
o = open('output-large.txt', 'w')
t = int(f.readline().strip())
for i in xrange(1, t + 1):
    o.write("Case #{}: ".format(i))
    n = int(f.readline().strip())
    x = [int(j) for j in f.readline().strip().split()]
    ans = [0] * 5005
    for j in xrange(n):
        for k in xrange(x[j * 2], x[(j * 2) + 1] + 1):
            ans[k] += 1
    n = int(f.readline().strip())
    for j in xrange(n):
        x = int(f.readline().strip())
        o.write("{} ".format(ans[x]))
    o.write("\n")
