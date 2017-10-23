n = 0
ans = 0
while n <= 1.0:
    n += (0.84 * ans)
    ans += (1 + ans)
print ans
