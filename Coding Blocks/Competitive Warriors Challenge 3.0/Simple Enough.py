def answer(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        s = str(answer(n / 2))
        return s + str(n % 2) + s
data = [int(i) for i in raw_input().split()]
text = answer(data[0])
ans = 0
for i in xrange(data[1] - 1, data[2]):
    if text[i] == '1':
        ans += 1
print ans
