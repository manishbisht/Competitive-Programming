def answer(n, i):
    return 0 if n & (1 << i) == 0 else 1
