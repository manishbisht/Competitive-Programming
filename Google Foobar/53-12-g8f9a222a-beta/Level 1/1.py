def answer(data, n):
	t = {}
	for d in data:
		t[d] = t.get(d, 0) + 1
	for d in t:
		if t[d] > n:
			for i in range(t[d]):
				data.remove(d)
	return data
print answer([5, 10, 15, 10, 7], 1)
print answer([1, 2, 3], 0)
print answer([1, 2, 2, 3, 3, 3, 4, 5, 5], 1)
print answer([1, 2, 3], 6)
