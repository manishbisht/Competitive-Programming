t = int(raw_input())
for i in xrange(t):
    text = raw_input()
    a = 0
    b = 0
    tt = '.'
    c = 0
    for x in text:
        if x == 'A':
            a += 1
            if tt == 'A':
                a += c
            tt = 'A'
            c = 0
        elif x == 'B':
            b += 1
            if tt == 'B':
                b += c
            tt = 'B'
            c = 0
        else:
            c += 1
    print a,
    print b