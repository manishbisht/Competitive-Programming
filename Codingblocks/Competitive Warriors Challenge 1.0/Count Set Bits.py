def answer(n):
    count = 0
    while n > 0:
        n &= n - 1
        count += 1
    return count
    
n = int(raw_input())
for i in xrange(n):
    num = int(raw_input())
    print answer(num)
