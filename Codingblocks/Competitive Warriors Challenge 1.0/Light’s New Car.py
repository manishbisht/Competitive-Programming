def power(x, y):
    if y == 0:
        return 1
    smallPower = power(x, y/2)
    smallPower %= 1000000007
    smallPower = (smallPower * smallPower) % 1000000007
    if y & 1:
        return ((x * smallPower) % 1000000007)
    return smallPower
    
n = int(raw_input())
for i in xrange(n):
    data = [int(j) for j in raw_input().split()]
    data[0] %= 1000000007
    data[1] %= 1000000007 - 1
    print power(data[0], data[1])
