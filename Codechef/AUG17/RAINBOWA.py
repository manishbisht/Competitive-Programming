t = int(raw_input().strip())
for i in xrange(t):
    n = int(raw_input().strip())
    data = [int(j) for j in raw_input().strip().split()]
    length = (n + 1) / 2
    c = 1
    ans = 0
    if len(data) < 13:
        ans = 1
    else:
        for j in xrange(length):
            if data[j] < 8 or data[n - 1 - j] < 8:
                if data[j] == data[n - 1 - j]:
                    if data[j] == c:
                        continue
                    elif data[j] == c + 1 and c + 1 < 8 and data[0] == 1:
                        c += 1
                    else:
                        ans = 1
                        break
                else:
                    ans = 1
                    break
            else:
                ans = 1
                break
    if ans == 0 and c == 7:
        print "yes"
    else:
        print "no"
