f = open('sample-input.txt')
o = open('output.txt', 'w')
t = int(f.readline().strip())
for i in xrange(t):
    # text = str(f.readline().strip())
    # n = int(f.readline().strip())
    # x = [int(j) for j in f.readline().strip().split(" ")]
    # y = [int(j) for j in f.readline().strip().split(" ")]
    o.write("Case #{}: \n".format(i))