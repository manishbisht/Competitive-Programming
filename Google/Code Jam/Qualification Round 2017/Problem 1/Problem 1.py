f = open('sample-input.in')
o = open('sample-output.out', 'w')
t = int(f.readline().strip())
for i in xrange(1, t + 1):
	x = [str(j) for j in f.readline().strip().split(" ")]
	x[1] = int(x[1])
	for j in xrange(0, len(x[0])-x[1]):
		if x[0][j] == '-':
			for k in xrange(j, j+x[1]):
				if x[0][j] == '-':
					x[0][j] = '+'
				else:
					x[0][j] = '-'
		print x[0]
			
	o.write("Case #{}: {}\n".format(i, x))
