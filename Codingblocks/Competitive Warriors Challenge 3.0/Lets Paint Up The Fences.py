def answer(data, start, end, ans):
    if start >= end:
        return 0
    m = start
    for i in xrange(start, end):
        if data[m] > data[i]:
            m = i
    return min(end - start, data[m] - ans + answer(data, start, m, data[m]) + answer(data, m + 1, end, data[m]))
n = int(raw_input())
data = [int(i) for i in raw_input().strip().split()]
print answer(data, 0, n, 0)
