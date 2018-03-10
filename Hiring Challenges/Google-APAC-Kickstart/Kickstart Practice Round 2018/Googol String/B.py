def ans(l, k):
    if k == l / 2:
        return 0
    elif k < l / 2:
        return ans(l / 2, k)
    return 1 ^ ans(l / 2, l - k - 1)


f = open('B-large-practice.in')
o = open('output-large.txt', 'w')
t = int(f.readline().strip())
for i in xrange(1, t + 1):
    o.write("Case #{}: ".format(i))
    k = int(f.readline().strip())
    l = 0
    while l <= k:
        l = l * 2 + 1
    o.write("{}\n".format(ans(l, k - 1)))
