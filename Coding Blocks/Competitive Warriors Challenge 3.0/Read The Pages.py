def check(data, mid, m):
    temp = 0
    c = 1
    for i in data:
        if temp + i <= mid:
            temp += i
        else:
            temp = i
            c += 1
            if c > m:
                return False
    return True

data = [int(i) for i in raw_input().split()]
n = data[0]
m = data[1]
data = [int(i) for i in raw_input().split()]
data = sorted(data)
start = max(data)
end = 0
for x in data:
    end += x
while start < end:
    mid = (start + end) / 2
    if check(data, mid, m):
        end = mid
    else:
        start = mid + 1
print start
