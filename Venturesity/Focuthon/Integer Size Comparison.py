t = int(raw_input())
for i in xrange(0, t):
	a = long(raw_input())
	b = long(raw_input())
	c = long(raw_input())
	d = long(raw_input())
	if a == c and b == d:
		print "E"
	elif a > c and b > d:
		print "Y"
	else:
		print "N"
