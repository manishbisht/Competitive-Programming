def dpfactorial(n):
    fact = 1
    dpfact = [1]
    for i in xrange(n):
        fact *= (i + 1)
        fact = fact
        dpfact.append(fact)
    return dpfact

dpfact = dpfactorial(21)
n = int(raw_input())
data = [int(i) for i in raw_input().strip().split()]
sum = 0
for i in xrange(n):
    sum += dpfact[data[i]]
print sum % 107
