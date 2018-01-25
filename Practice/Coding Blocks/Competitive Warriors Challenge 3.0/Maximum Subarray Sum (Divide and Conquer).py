def answer(data):
    m = data[0]
    mm = data[0]
    for x in data[1:]:
        m = max(x, m + x)
        mm = max(m, mm)
    return mm
t = int(raw_input())
for i in xrange(t):
    n = int(raw_input())
    data = [int(i) for i in raw_input().split()]
    print answer(data)
