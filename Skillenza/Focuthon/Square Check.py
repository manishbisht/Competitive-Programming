R = raw_input
def q(a, b, c, d):
	return (a-c) ** 2 + (b-d) ** 2
def r(a):
	b = q(a[0], a[1], a[2], a[3])
	c = q(a[0], a[1], a[4], a[5])
	d = q(a[0], a[1], a[6], a[7])
	if b == c and 2*b == d:
		e = q(a[2], a[3], a[6], a[7])
		return (e == q(a[4], a[5], a[6], a[7]) and e == b)
	if c == d and 2*c == b:
		e = q(a[2], a[3], a[4], a[5])
		return (e == q(a[2], a[3], a[6], a[7]) and e == c)
	if b == d and 2*b == c:
		e = q(a[2], a[3], a[4], a[5])
		return (e == q(a[4], a[5], a[6], a[7]) and e == b)
	return None
t = int(R())
for i in xrange(0, t):
	a = [float(j) for j in R().split()]
	if r(a):
		print "1"
	else:
		print "0"
