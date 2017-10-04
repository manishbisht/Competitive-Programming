def answer(a, b):
    if b == 0:
        return a
    return answer(b, a % b)

data = [int(i) for i in raw_input().split()]
print answer(data[0], data[1])
