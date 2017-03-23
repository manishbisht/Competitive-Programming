n = int(raw_input(), 2)
min = 0 ^ (n + 0)
for i in xrange(0, n+1):
	if min > i ^ (n + i):
		min = i ^ (n + i)
print min

