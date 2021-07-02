n = int(raw_input())
ans = []
ans.append([1])
ans.append([1, 1])
for i in xrange(8):
    temp = [1]
    key = len(ans) - 1
    for j in xrange(len(ans[key]) - 1):
        temp.append(ans[key][j] + ans[key][j + 1])
    temp.append(1)
    ans.append(temp)
for i in xrange(n + 1):
    for j in xrange(n - i):
        print "  ",
    for j in xrange(len(ans[i])):
        print str(ans[i][j]) + "    ",
    print " "
