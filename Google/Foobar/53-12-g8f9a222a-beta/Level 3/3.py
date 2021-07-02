def answer(M, F):
	ans = 0
	M = long(M)
	F = long(F)
	while M != 0 or F != 0:
		if M == F or M == 0 or F == 0:
			return "impossible"
		elif F % M == 0:
			t = (F / M) - 1
			F = F - (M * t)
		elif M % F == 0:
			t = (M / F) - 1
			M = M - (F * t)
		elif M > F:
			t = M / F
			M = M - (F * t)
		elif F > M:
			t = F / M
			F = F - (M * t)
		ans = ans + t	
	return ans

print answer(2, 2)
print answer(2, 1)
print answer(4, 7)
print answer(31, 4)
print answer(2, 6)
print answer(5, 1)
print answer(5, 4)
print answer(10**50, 10**50)

def res(M, N):
	ans = 0
	while M != 1 or N != 1:
		if M == N or M == 0 or N == 0:
			return "impossible"
		elif M > N:
			M = M - N
		else:
			N = N - M
		ans = ans + 1
	return ans

for i in range(0, 5):
	for j in range(0, 5):
		print str(i) + ", " + str(j) + " " + str(answer(i, j)) + " " + str(res(i, j))
