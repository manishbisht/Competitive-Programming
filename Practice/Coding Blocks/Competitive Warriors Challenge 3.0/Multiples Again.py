def answer(a, b):
    if b == 0:
        return a
    return answer(b, a % b)

t = int(raw_input())
for i in xrange(t):
    data = [int(j) for j in raw_input().split()]
    ans = (data[0] * data[1]) / answer(data[0], data[1])
    print data[2] / ans
