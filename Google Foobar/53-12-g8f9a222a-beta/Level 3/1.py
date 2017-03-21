from collections import deque
def valid(v, a, b, c, d):
	if a >= 0 and a < c and b >= 0 and b < d:
		if v[a][b][3] == 0:
			return True
		return False
	return False
 
def solve(ma, x, y, l):
	a = len(ma)
	b = len(ma[0])
	ans = a * b
	min = a * b
	v = []
	for i in range(0, a+1):
		t = []
		for j in range(0, b+1):
			t.append([i, j, 0, 0])
		v.append(t)
	q = deque()
	s = v[x][y]
	q.append(s)
	
	
	while len(q) > 0:
		r = q.popleft()
		i = r[0]
		j = r[1]
		d = r[2]
		if i == a-1 and j == b-1:
			ans = v[i][j][2] + 1
			break
		v[i][j][3] = 1
		if valid(v, i+1, j, a, b):
			if ma[i+1][j] == 0:
				v[i+1][j][2] = 1 + d
				q.append(v[i+1][j])
			if ma[i+1][j] == 1 and v[i+1][j][3] == 0 and l == 0:
				t = solve(ma, i+1, j, 1)
				if t > 0:
					t = t + d + 1
					if t < min:
						min = t
				v[i+1][j][3] = 1
		if valid(v, i, j+1, a, b):
			if ma[i][j+1] == 0:
				v[i][j+1][2] = 1 + d
				q.append(v[i][j+1])
			if ma[i][j+1] == 1 and v[i][j+1][3] == 0 and l == 0:
				t = solve(ma, i, j+1, 1)
				if t > 0:
					t = t + d + 1
					if t < min:
						min = t
				v[i][j+1][3] = 1
		if valid(v, i-1, j, a, b):
			if ma[i-1][j] == 0:
				v[i-1][j][2] = 1 + d
				q.append(v[i-1][j])
			if ma[i-1][j] == 1 and v[i-1][j][3] == 0 and l == 0:
				t = solve(ma, i-1, j, 1)
				if t > 0:
					t = t + d + 1
					if t < min:
						min = t
				v[i+1][j][3] = 1
		if valid(v, i, j-1, a, b):
			if ma[i][j-1] == 0:
				v[i][j-1][2] = 1 + d
				q.append(v[i][j-1])
			if ma[i][j-1] == 1 and v[i][j-1][3] == 0 and l == 0:
				t = solve(ma, i, j-1, 1)
				if t > 0:
					t = t + d + 1
					if t < min:
						min = t
				v[i][j-1][3] = 1
	if ans < min:
		return ans
	else:
		return min

def ans(ma):
	a = len(ma)
	b = len(ma[0])
	return solve(ma, 0, 0, 0)

def nearby(c, m):
	a = len(m)
	b = len(m[0])
	n = []
	x = c.x
	y = c.y
	s = c.s
	if y < a-1:
		w = m[y+1][x] == 1
		if w:
			if s > 0:
				n.append(Node(x, y+1, s-1))
		else:
			n.append(Node(x, y+1, s))
	if x < b-1:
		w = m[y][x+1] == 1
		if w:
			if s > 0:
				n.append(Node(x+1, y, s-1))
		else:
			n.append(Node(x+1, y, s))
	if x > 0:
		w = m[y][x-1] == 1
		if w:
			if s > 0:
				n.append(Node(x-1, y, s-1))
		else:
			n.append(Node(x-1, y, s))
	if y > 0:
		w = m[y-1][x] == 1
		if w:
			if s > 0:
				n.append(Node(x, y-1, s-1))
		else:
			n.append(Node(x, y-1, s))
	return n
class Node:
	def __init__(self, x, y, s):
		self.x = x
		self.y = y
		self.s = s

	def __hash__(self):
        	return self.x ^ self.y ^ self.s

	def __eq__(self, other):
        	return self.x == other.x and self.y == other.y

def solution(m , s):
	a = len(m)
	b = len(m[0])
	start = Node(0, 0, s)
	q = deque([start])
	d = {start: 1}
	while q:
		c = q.popleft()
		#print str(c.x) +", " + str(c.y)
		if c.x == a-1 and c.y == b-1:
			return d[c]
		for i in nearby(c, m):
			if i not in d.keys():
				d[i] = d[c] + 1
				q.append(i)
	return 1000 * 1000 * 1000
	
def answerr(m):
	return solution(m, 1)
class Board(dict):
	tv = 0
	ntv = 1
	unv = None
	urv = None
	
	def __init__(self, m):
		super(Board, self).__init__()
		self.df = None
		self.h = len(m)
		self.w = len(m[0])
		for r, row in enumerate(m):
			assert self.w == len(row)
			for c, val in enumerate(row):
				self[r, c] = Cell(self, (r, c), val)

	def __getitem__(self, item):
		if isinstance(item, Cell):
			return self[item.c].v
		return super(Board, self).__getitem__(item)

	def __setitem__(self, key, value):
		if isinstance(key, Cell):
			self[key.c].v = value
		else:
			return super(Board, self).__setitem__(key, value)

class Cell(object):
	def __init__(self, b, c, v):
		self.c = c
		self.b = b
		self.v = v
		self.md = None

	def nearby(self):
		r, c = self.c
		for c in ((r-1, c), (r+1, c), (r, c-1), (r, c+1)):
			try:
				yield self.b[c]
			except KeyError:
				pass

	def isT(self, b):
		return b[self] == b.tv

	def isW(self, b):
		return b[self] == b.ntv

	def isunv(self, b):
		return b[self] == b.unv

	def isunr(self, other):
		assert isinstance(other, Cell)
		return other.md[self] == self.b.urv

	def mind(self, b):
		if self.isW(b):
			return None
		md = Board([[Board.unv] * b.w] * b.h)
		md[self] = 1
		cells = deque([self])
		while cells:
			cell = cells.popleft()
			mdc = md[cell]
			for n in cell.nearby():
				isT = n.isT(b)
				isUnv = n.isunv(md)
				if isT and isUnv:
					mdn = mdc + 1
					md[n] = mdn
					cells.append(n)
		self.md = md
def rr(w, b, s, e):
	br = 2 ** 31 - 1
	for i in w.nearby():
		for j in w.nearby():
			if i == j or i.isW(b) or j.isW(b) or i.isunr(s) or j.isunr(e):
				continue
			mdi = s.md[i]
			mdj = e.md[j]
			pbr = mdi + 1 + mdj
			br = min(br, pbr)
	return br

def answer(maze):
	b = Board(maze)
	bcr = b.h + b.w - 1
	s = b[0, 0]
	e = b[b.h-1, b.w-1]
	s.mind(b)
	if e.isunr(s):
		br = 2 ** 31 - 1
	else:
		br = s.md[e.c]
	if br == bcr:
		return bcr
	e.mind(b)
	for r in range(b.h):
		for c in range(b.w):
			cell = b[r, c]
			if cell.isW(b):
				w = cell
				pwr = rr(w, b, s, e)
				br = min(br, pwr)
	return br	
	

print answer([[0, 1, 1, 0], [0, 0, 0, 1], [1, 1, 0, 0], [1, 1, 1, 0]])
print answer([[0, 0, 0, 0, 0, 0], [1, 1, 1, 1, 1, 0], [0, 0, 0, 0, 0, 0], [0, 1, 1, 1, 1, 1], [0, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0]])
print answer([[0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0],
    [1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0],
    [1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1],
    [0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]])

print answer([[0, 0], [1, 0], [1, 0], [1, 0], [1, 0], [1, 0], [1, 0], [1, 0], [1, 0], [1, 0], [1, 0], [1, 0], [1, 0], [1, 0], [1, 0], [1, 0], [1, 0], [1, 0], [0, 0], [1, 0]])

print answer([[0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0]])
print answer([[0, 0], [0, 0]])
print answer([ [0, 0, 1, 0],
      [1, 1, 1, 0],
      [1, 0, 1, 0],
      [1, 1, 1, 0],
      [1, 0, 0, 0],
      [1, 0, 1, 1],
      [1, 0, 0, 0] ])
