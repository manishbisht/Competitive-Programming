def factorial(n, k):
    if n == 1:
        return 1
    if n == k:
        return 1
    return n * factorial(n - 1, k)
data = [int(i) for i in raw_input().split()]
data[1] = max(data[1], data[0] - data[1])
print (factorial(data[0], data[1]) / factorial(data[0]-data[1], 1)) % 1000000007
