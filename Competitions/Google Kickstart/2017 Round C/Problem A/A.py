f = open('sample-input.txt')
o = open('o1.txt', 'w')
t = int(f.readline().strip())
for i in xrange(0, t):
    content = str(f.readline().strip())
    check = {}
    for j in xrange(0, len(content)):
        if j == 0:
            ans = (ord(content[j+1]) - 65 - 26) % 26
            check[content[j]] = 'A'
        elif j == len(content) - 1:
            check[content[j]] = 'C'
        else:
            ans = "2"
            check[content[j]]
    #n = int(f.readline().strip())
    #x = [int(j) for j in f.readline().strip().split(" ")]
    #y = [int(j) for j in f.readline().strip().split(" ")]
    #o.write("Case #{}:\n".format(i))