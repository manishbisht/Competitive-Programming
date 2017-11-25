def answer(n, m):
    m0 = m
    t = 0
    q = 0
    x0 = 0
    x1 = 1
    while n > 1:
        q = n / m
        t = m
        m = n % m
        n = t
        t = x0
        x0 = x1 - q * x0
        x1 = t
    if x1 < 0:
        x1 += m0
    return x1
n = int(raw_input())
print answer(n, 1000000007)

# http://www.geeksforgeeks.org/multiplicative-inverse-under-modulo-m/
