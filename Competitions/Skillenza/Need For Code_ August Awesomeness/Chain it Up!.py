t = int(raw_input().strip())
for i in xrange(t):
    data = raw_input().strip()
    if len(data) > 0 and data[0] == '*':
        c = 0
        for i in xrange(1, len(data)):
            if data[i] == '-':
                c += 1
            elif data[i] == '*' and c > 0:
                c -= 1
            else:
                c += 1
                break
        if c == 0:
            print "Strong"
        else:
            print "Not Strong"
    else:
        print "Not Strong"
