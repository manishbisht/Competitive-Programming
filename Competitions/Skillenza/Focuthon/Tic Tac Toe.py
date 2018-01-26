t = int(raw_input())
for i in xrange(0, t):
	n = int(raw_input())
	a = []
	b = 0
	c = 0
	for j in xrange(0, n):
		t = raw_input().split(' ')
		a.append(t)
	for j in xrange(0, n):
		d = 0
		e = 0
		for k in xrange(0, n):
			if a[j][k] == 'x':
				d += 1
				if e > 2:
					c += e - 2
				e = 0
			else:
				e += 1
				if d > 2:
					b += d - 2
				d = 0
	print b
	print c
