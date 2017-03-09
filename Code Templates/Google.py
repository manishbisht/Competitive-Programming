f = open('A-small-practice.in')
o = open('o1.txt', 'w')
t = int(f.readline().strip())
for i in xrange(1, t + 1):
	n = int(f.readline().strip())
	x = [int(j) for j in f.readline().strip().split(" ")]
	y = [int(j) for j in f.readline().strip().split(" ")]
	o.write("Case #{}:\n".format(i))
