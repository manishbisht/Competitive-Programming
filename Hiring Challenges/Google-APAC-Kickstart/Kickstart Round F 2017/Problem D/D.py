f = open('sample-input.txt')
o = open('output.txt', 'w')
t = int(f.readline().strip())
ans = [0]
temp = [1]
j = 1
tt = 1
count = 0
for i in xrange(1, 10001):
    if i in temp:
        count = j
        tt += j * j
        j += 1
    else:
        count += 1
    ans.append(count)
print ans
'''for i in xrange(t):
    n = int(f.readline().strip())

    o.write("Case #{}: \n".format(i))'''