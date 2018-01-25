def ans(n, data, c):
    cowplaced = 0
    lastpos = data[0]
    for i in xrange(1, len(data)):
        if data[i] - lastpos >= n:
            cowplaced += 1
            lastpos = data[i]
            if cowplaced == c:
                return True
    return False

data = [int(i) for i in raw_input().split()]
n = data[0]
k = data[1]
data = [int(i) for i in raw_input().split()]
data = sorted(data)
start = 0
end = data[n - 1]
while start < end:
    mid = (end + start) / 2
    if ans(mid, data, k):
        start = mid + 1
        break
    else:
        end = mid
print start - 1
