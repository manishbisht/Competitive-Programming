def check(data, k, mid):
    t = 0
    p = 1
    for x in data:
        if t + x > mid:
            t = x
            p += 1
        else:
            t += x
        if p > k:
            return False
    return True

k = int(raw_input())
n = int(raw_input())
data = [int(i) for i in raw_input().split()]
start = max(data)
end = 0
ans = 0
for x in data:
    end += x
while start < end:
    mid = (start + end) / 2
    if check(data, k, mid):
        ans = mid
        end = mid
    else:
        start = mid + 1
print ans
