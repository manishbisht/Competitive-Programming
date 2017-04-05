def g(a, b):
    while b:
        a, b = b, a%b
    return a
t = int(raw_input())
for i in xrange(0, t):
	a = [int(j) for j in raw_input().split(' ')]
	print g(a[2], a[3]) / g(a[0], a[1])
