def check(x1, y1, r1, x2, y2, r2):
	distance = ((x1-x2) ** 2 + (y1-y2) ** 2) ** 0.5
	if distance >= (r1+r2):
		return "Circle doesn't overlap"
	return "Circle overlap"

#Input Circle 1 center coordinates and its radius, Circle 2 center coordinates and its radius
a = [float(i) for i in raw_input().split()]
print check(a[0], a[1], a[2], a[3], a[4], a[5])
