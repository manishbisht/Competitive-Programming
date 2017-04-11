import math
f = open('task1-test-input.txt')
o = open('o1.txt', 'w')
t = int(f.readline().strip())
for i in xrange(1, t + 1):
	o.write("Case #{}:".format(i))
	n = f.readline()
	n = int(f.readline().strip())
	x = [int(j) for j in f.readline().strip().split(" ")]
	mean = 0.0 
	for j in xrange(0, n):
		mean += x[j]
	mean = mean / n
	v = 0.0
	for j in xrange(0, n):
		v += ((x[j] - mean) * (x[j] - mean))
	v = v / n
	if v == 0:
		for j in xrange(0, n):
			o.write(" 50.0000000000000000")
	else:		
		v = math.sqrt(v)
		for j in xrange(0, n):
			o.write(" {}".format(50 + 10 * (x[j] - mean) / v))
	o.write("\n")
