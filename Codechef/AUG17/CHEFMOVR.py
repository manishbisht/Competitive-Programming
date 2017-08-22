t = int(raw_input().strip())
for i in xrange(t):
    data = [int(j) for j in raw_input().strip().split()]
    n = data[0]
    d = data[1]
    data = [int(j) for j in raw_input().strip().split()]
    sum = 0
    for j in data:
        sum += j
    if sum % n == 0:
        value = sum / n
        ans = 0
        for j in xrange(d):
            new_sum = 0
            c = 0
            for k in xrange(j, n, d):
                new_sum += data[k]
                c += 1
            if new_sum % c == 0 and new_sum / c == value:
                need = []
                extra = 0
                cc = 1
                for k in xrange(j, n, d):
                    if data[k] > value:
                        extra += data[k] - value
                        need.append(-1)
                    elif data[k] < value:
                        need.append(value - data[k])
                for nn in xrange(len(need)):
                    if need[nn] > 0:
                        if extra > 0:
                            m = min(extra, need[nn])
                            ans += m * cc
                            extra -= m
                            need[nn] -= m
                            cc += 1
                    elif need[nn] == -1:
                        cc = 1
                    else:
                        cc += 1
            else:
                ans = -1
                break
        print ans
    else:
        print "-1"
