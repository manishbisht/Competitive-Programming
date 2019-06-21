 # 1c, 5c, 10c, 25c, 50c, and $1

def getChange(M, P):
    ans = []
    amountRemaining = (M * 100) - (P * 100)
    count = int(amountRemaining / 100)
    amountRemaining -= (count * 100)
    ans.insert(0, count)

    count = int(amountRemaining / 50)
    amountRemaining -= (count * 50)
    ans.insert(0, count)

    count = int(amountRemaining / 25)
    amountRemaining -= (count * 25)
    ans.insert(0, count)

    count = int(amountRemaining / 10)
    amountRemaining -= (count * 10)
    ans.insert(0, count)

    count = int(amountRemaining / 5)
    amountRemaining -= (count * 5)
    ans.insert(0, count)

    print amountRemaining
    ans.insert(0, int(amountRemaining))
    return ans


print (getChange(5, 0.99))
print (getChange(3.14, 1.99))
# should return [0,1,1,0,0,1]
print (getChange(4, 3.14))
# should return [1,0,1,1,1,0]
print (getChange(0.45, 0.34))
# should return [1,0,1,0,0,0]
