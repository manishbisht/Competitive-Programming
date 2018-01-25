t = int(raw_input())
for i in xrange(t):
    data = [int(j) for j in raw_input().split()]
    start = 1
    end = data[0]
    ans = 0
    while start <= end:
        mid = (start + end) / 2
        if mid ** data[1] == data[0]:
            ans = mid
            break
        elif mid ** data[1] < data[0]:
            ans = mid
            start = mid + 1
        else:
            end = mid - 1
    print ans
