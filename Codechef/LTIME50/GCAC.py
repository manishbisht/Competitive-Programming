t = int(raw_input().strip())
for i in xrange(t):
    data = [int(j) for j in raw_input().strip().split()]
    n = data[0]
    m = data[1]
    minSalary = [int(j) for j in raw_input().strip().split()]
    company = []
    for j in xrange(m):
        data = [int(k) for k in raw_input().strip().split()]
        company.append(data)
    offer = []
    for j in xrange(n):
        offer.append(int(raw_input().strip()))