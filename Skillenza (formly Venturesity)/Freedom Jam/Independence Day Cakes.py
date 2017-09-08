def check_subset(data, n, sum):
    subset = []
    for i in xrange(n + 1):
        temp = []
        for j in xrange(sum + 1):
            temp.append(False)
        subset.append(temp)
    for i in xrange(n + 1):
        subset[i][0] = True
    for i in xrange(1, n + 1):
        for j in xrange(1, sum + 1):
            if j < data[i - 1]:
                subset[i][j] = subset[i - 1][j]
            else:
                subset[i][j] = subset[i - 1][j] or subset[i - 1][j - data[i - 1]]

    return subset[n][sum]

t = int(raw_input().strip())
for i in xrange(t):
    data = [int(j) for j in raw_input().strip().split()]
    n = data.pop(0)
    m = int(raw_input().strip())
    if m in data:
        print "YES"
    elif check_subset(data, n, m):
        print "YES"
    else:
        print "NO"

#Resource
#http://www.geeksforgeeks.org/dynamic-programming-subset-sum-problem/