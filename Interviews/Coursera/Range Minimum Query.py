# Enter your code here. Read input from STDIN. Print output to STDOUT

data = [int(i) for i in raw_input().split()]
n = data[0]
m = data[1]

data = [int(i) for i in raw_input().split()]

for i in xrange(m):
    temp = [int(j) for j in raw_input().split()]
    a = temp[0]
    b = temp[1]
    print min(data[slice(a, b + 1)])
