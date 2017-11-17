n = int(raw_input())
data = []
for i in xrange(n):
    data.append(int(raw_input()))
x = int(raw_input())
if x in data:
    print len(data) - 1 - data[::-1].index(x)
else:
    print -1
