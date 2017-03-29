def c(n):
	a = 0
	i = 5
	while n / i >= 1:
		a += n / i
		i = i * 5
	return a
t = int(raw_input())
for i in xrange(0, t):
	a = raw_input().split(' ')
	print c(int(a[0])) * int(a[1])
