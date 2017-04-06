import math
t = int(raw_input())
for i in xrange(0, t):
	a = long(raw_input())
	b = long(raw_input())
	c = long(raw_input())
	d = long(raw_input())	
	if b * math.log1p(a) == d * math.log1p(c):
		print "E"
	elif b * math.log1p(a) > d * math.log1p(c):
		print "Y"
	else:
		print "N"
