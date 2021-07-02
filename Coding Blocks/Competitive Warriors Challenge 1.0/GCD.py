def answer(a, b):
    if b == 0:
        return a
    return answer(b, a % b)

a = int(raw_input())
b = int(raw_input())
print answer(a, b)
