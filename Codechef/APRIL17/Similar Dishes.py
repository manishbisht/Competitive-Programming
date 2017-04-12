t = int(raw_input())
for i in xrange(0, t):
	x = [str(j) for j in raw_input().split(" ")]
	y = [str(j) for j in raw_input().split(" ")]
	c = 0
	for i in xrange(0, len(x)):
		if x[i] in y:
			c += 1
	if c > 1:
		print "similar"
	else:
		print "dissimilar"
