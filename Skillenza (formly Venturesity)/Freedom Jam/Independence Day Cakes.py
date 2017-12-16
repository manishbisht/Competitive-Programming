def isSubsetSum(arr, n, sum):
    
    subset = [ [False for j in range(sum + 1)] for i in range(3) ]
    for i in range(n + 1):
        for j in range(sum + 1):
            if (j == 0):
                subset[i % 2][j] = True
            elif (i == 0):
                subset[i % 2][j] = False
            elif (arr[i - 1] <= j):
                subset[i % 2][j] = subset[(i + 1) % 2][j - arr[i - 1]] or subset[(i + 1) % 2][j]
            else:
                subset[i % 2][j] = subset[(i + 1) % 2][j]
    return subset[n % 2][sum]

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
    elif isSubsetSum(data, n, m):
        print "YES"
    else:
        print "NO"

#Resource
#http://www.geeksforgeeks.org/dynamic-programming-subset-sum-problem/
