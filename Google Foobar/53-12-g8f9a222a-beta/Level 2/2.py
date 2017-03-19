from collections import deque
def valid(v, a, b):
	if a >= 0 and a < 8 and b >= 0 and b < 8:
		if v[a][b] == 0:
			return True
		return False
	return False
 
def getPoint(n):
	return divmod(n, 8);

def answer(a, b):
	a = getPoint(a)
	b = getPoint(b)
	v = []
	for i in range(0, 8):
		t = []
		for j in range(0, 8):
			t.append(0)
		v.append(t)
	q = deque()
	q.append(a)
	ans = 0
	t = 0
	while len(q) > 0:
		s = len(q)
		for i in range(0, s):
			r = q.popleft()
			#print r
			v[r[0]][r[1]] = 1
			if r[0] == b[0] and r[1] == b[1]:
				return ans
			x = r[0]
			y = r[1]
			if valid(v, x+2, y+1):
				q.append([x+2, y+1])
			if valid(v, x-2, y+1):
				q.append([x-2, y+1])
			if valid(v, x+2, y-1):
				q.append([x+2, y-1])
			if valid(v, x-2, y-1):
				q.append([x-2, y-1])
			if valid(v, x+1, y+2):
				q.append([x+1, y+2])
			if valid(v, x-1, y+2):
				q.append([x-1, y+2])
			if valid(v, x+1, y-2):
				q.append([x+1, y-2])
			if valid(v, x-1, y-2):
				q.append([x-1, y-2])
		ans = ans + 1

print answer(19, 36)
print answer(0, 1)
print answer(0, 63)
print answer(0, 8)
