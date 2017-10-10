n = raw_input()
ans = ''
for i in xrange(len(n)):
    nn = int(n[i])
    if i == 0 and nn == 9:
        ans += n[i]
        continue
    if nn > 4:
        ans += str(9 - nn)
    else:
        ans += str(nn)
print ans
