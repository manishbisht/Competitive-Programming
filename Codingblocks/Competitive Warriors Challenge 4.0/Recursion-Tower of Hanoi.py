def answer(n, src, dest, helper):
    if n == 1:
        print "Move " + str(n) + "th disc from " + src + " to " + dest
        return
    
    answer(n - 1, src, helper, dest)
    print "Move " + str(n) + "th disc from " + src + " to " + dest
    answer(n - 1, helper, dest, src)
n = int(raw_input())
answer(n, 'T1', 'T2', 'T3')
print 2 ** n - 1
