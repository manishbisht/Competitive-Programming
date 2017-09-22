# O(number of total bits)
def answer(n):
    ans = 0
    while n > 0:
        ans += (n & 1)
        n >>= 1
    return ans


# O(number of set bits)
def optimised(n):
    ans = 0
    while n > 0:
        n &= n - 1
        ans += 1
    return ans
