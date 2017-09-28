def countOnes(n):
    ans = 0
    while n > 0:
        n &= n - 1
        ans += 1
    return ans


def answer(a, b):
    return countOnes(a ^ b)
