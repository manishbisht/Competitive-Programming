f = open('task1-test-input.txt')
o = open('output.txt', 'w')
t = int(f.readline().strip())
for i in xrange(1, t + 1):
    o.write("Case #{}: ".format(i))
    n = f.readline()
    n = int(f.readline().strip())
    points = []
    for p in xrange(n):
        temp = [int(j) for j in f.readline().strip().split()]
        points.append(temp)
    ans = []
    for p in xrange(0, len(points) - 2):
        for q in xrange(p + 1, len(points) - 1):
            for r in xrange(q + 1, len(points)):
                length_pq = ((((points[p][0] - points[q][0]) ** 2) + ((points[p][1] - points[q][1]) ** 2)) ** 0.5)
                length_qr = ((((points[q][0] - points[r][0]) ** 2) + ((points[q][1] - points[r][1]) ** 2)) ** 0.5)
                length_pr = ((((points[p][0] - points[r][0]) ** 2) + ((points[p][1] - points[r][1]) ** 2)) ** 0.5)
                ans.append(length_pq + length_qr + length_pr)
    ans = sorted(ans)
    o.write("{}".format(ans[0]))
    o.write("\n")
