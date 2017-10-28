def answer(a, b):
    if b == 0:
        return a
    return answer(b, a % b)

n = int(raw_input())
data = [int(i) for i in raw_input().split()]
ans = data[0]
for i in xrange(n-1):
    ans = answer(ans, data[i])
print ans
