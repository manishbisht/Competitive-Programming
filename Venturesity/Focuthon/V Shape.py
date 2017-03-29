import sys
S = sys.stdout.write
X = xrange
R = raw_input
t = int(R())
for i in X(0, t):
	a = R().split()
	a[1] = int(a[1])
	for j in X(0, a[1]):
		b = a[1]-j-2
		for k in X(0, j):
			S(' ')
		S(a[0])
		for k in X(0, b):
			S('  ')
		if j != a[1] - 1:
			S(' '+a[0])
		S('\n')
