t = int(raw_input().strip())
for i in xrange(t):
    s = raw_input()
    if s.count('1') % 2 == 0:
        print 'N'
    else:
        print 'Y'