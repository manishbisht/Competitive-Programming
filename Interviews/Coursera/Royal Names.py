# Complete the function below.

def getSortedList(names):
    names = sorted(names, key=lambda element: (element.split()[0], getNumber(element.split()[1])))
    return names

def getNumber(num):
    dp = {}
    dp['C'] = 100
    dp['L'] = 50
    dp['X'] = 10
    dp['V'] = 5
    dp['I'] = 1
    ans = 0
    prevDigit = 0
    currentDigit = 0
    num = num[::-1]
    for i in xrange(len(num)):
        currentDigit = dp[num[i]]
        if currentDigit >= prevDigit:
            ans += currentDigit
        else:
            ans -= currentDigit
        prevDigit = currentDigit
    return ans
        
