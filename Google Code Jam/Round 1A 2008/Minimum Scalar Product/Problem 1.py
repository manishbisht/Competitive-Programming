f = open('A-large-practice.in')
o = open('o2.txt', 'w')
t = int(f.readline().strip())
for i in xrange(1, t + 1):
	n = int(f.readline().strip())
	x = [int(j) for j in f.readline().strip().split(" ")]
	y = [int(j) for j in f.readline().strip().split(" ")]
	x.sort()
	y.sort(reverse=True)
	r = 0
	for j in xrange(0, n):
		r = r + x[j] * y[j]
	o.write("Case #{}: {}\n".format(i, r))
