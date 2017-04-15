f = open('sample-input.in')
o = open('output.out', 'w')
t = int(f.readline().strip())
for i in xrange(1, t + 1):
	x = [int(j) for j in f.readline().strip().split(" ")]
	if x[0] == x[1]:
		a = 0
		b = 0
	elif x[0] % 2 == 0:
		a = x[0] / 2
		b = (x[0] / 2) - 1
	else:
		a = x[0] / 2
		b = x[0] / 2
	o.write("{} {} ".format(x[0], x[1]))
	while x[1] != 1 and x[0] != x[1]:
		a = a / 2
		b = b / 2
		x[1] = x[1] / 2 
	o.write("Case #{}: {} {}\n".format(i, max(a, b), min(a, b)))
