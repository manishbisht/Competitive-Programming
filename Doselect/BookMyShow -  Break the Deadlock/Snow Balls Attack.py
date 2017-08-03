n = int(raw_input())
time = 0
count = 0
power = 0
for i in xrange(n):
    data = [int(j) for j in raw_input().split(" ")]
    time = data[0] - time
    power += time
    if power >= data[1]:
        power -= data[1]
    else:
        count += 1
print count
