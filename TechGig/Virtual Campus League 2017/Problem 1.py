def possibleways(input1):
    sum = 0
    for i in input1:
        sum += i
    ans = 0
    for i in xrange(len(input1)):
        ans += (i + 1) * sum * input1[i]
        sum -= input1[i]
        ans %= 10 ** 9 + 7
    return ans