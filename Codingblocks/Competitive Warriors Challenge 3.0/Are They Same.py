def answer(s):
    if len(s) % 2 == 1:
        return s
    s1 = answer(s[:len(s)/2])
    s2 = answer(s[len(s)/2:])
    if s1 < s2:
        return s1 + s2
    return s2 + s1

t = int(raw_input())
for i in xrange(t):
    s1 = raw_input()
    s2 = raw_input()
    if answer(s1) == answer(s2):
        print "YES"
    else:
        print "NO"
