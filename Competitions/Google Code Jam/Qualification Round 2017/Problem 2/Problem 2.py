def check(n):
	for i in xrange(0, len(n)-1):
		if n[i] > n[i+1]:
			return False
	return True
f = open('B-large.in')
o = open('output.out', 'w')
t = int(f.readline().strip())
for i in xrange(1, t + 1):
	n = f.readline().strip()
	ans = ''
	tt = 0
	if check(n):
		ans = n
	else:
		for j in xrange(0, len(n)-1):
			if int(n[len(n)-j-1]) <= int(n[len(n)-j-2]) or int(n[len(n)-j-1]) == 0:
				ans = str(9) + ans
				tt = 1
			elif tt:
				ans = str(int(n[len(n)-j-1]) - 1) + ans
				tt = 0
			else:
				ans = str(int(n[len(n)-j-1])) + ans
		if tt and int(n[0]) > 1:
			ans = str(int(n[0])-1) + ans
		elif not tt:
			ans = n[0] + ans
		tt = 0
		r = ''
		for j in xrange(0, len(ans)):
			if ans[j] == '9':
				tt = 1
			if tt == 1:
				r += '9'
			else:
				r += ans[j]
		ans = r
	o.write("Case #{}: {}\n".format(i, ans))
