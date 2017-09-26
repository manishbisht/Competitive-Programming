def answer(a, b):
    a ^= b
    b ^= a
    a ^= b
    return a, b
