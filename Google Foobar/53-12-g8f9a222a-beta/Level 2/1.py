def A(n):
	s = 1
	ans = 1
	t = 1
	while s + t * 2 <= n:
		s = s + t * 2
		t = t * 2
		ans = ans + 1
	return ans
def B(n):
	ans = 2
	i = 1
	j = 1
	s = i + j
	while s + i + j <= n:
		s = s + i + j
		ans = ans + 1
		t = i
		i = j
		j = t + j
	return ans
def answer(n):
	a = A(n) 
	b = B(n)
	if a < b:
		return b-a
	else:
		return a-b

print answer(10)
print answer(143)
