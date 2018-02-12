f = open('sample-input.txt')
o = open('sample-output.txt', 'w')
t = int(f.readline().strip())
for i in xrange(1, t + 1):
    o.write("Case #{}: ".format(i))
    n = int(f.readline().strip())
    x = [int(j) for j in f.readline().strip().split()]
    y = [int(j) for j in f.readline().strip().split()]
    o.write("\n")
