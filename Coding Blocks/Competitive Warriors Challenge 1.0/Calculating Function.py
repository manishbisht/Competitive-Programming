n = int(raw_input())
for i in xrange(n):
    nn = int(raw_input())
    if nn % 2 == 0:
        print str(nn / 2)
    else:
        print "-" + str((nn + 1) / 2)
