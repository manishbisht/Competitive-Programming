t = int(raw_input())
for i in xrange(0, t):
	n = int(raw_input())
	x = [int(j) for j in raw_input().split(" ")]
	x.sort()
	for j in xrange(1, n-1):
		if x[j-1]+1 != x[j] and x[j-1]+2 != x[j+1]:
			print x[j-1]
			break
		elif x[j-1]+1 != x[j] and x[j]+1 != x[j+1]:
			print x[j]
			break
		elif x[j-1]+2 != x[j+1] and x[j]+1 != x[j+1]:
			print x[j+1]
			break
