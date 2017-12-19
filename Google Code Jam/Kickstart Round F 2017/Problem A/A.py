f = open('A-small-attempt2.in')
o = open('output2.txt', 'w')
t = int(f.readline().strip())
for i in xrange(t):
    n = int(f.readline().strip())
    x = [int(j) for j in f.readline().strip().split(" ")]
    ans = "YES"
    nn = n
    j = 0
    while n > 0:
        if n % 2 == 0:
            if (x[(nn / 2) + j] == n or x[(nn / 2) + j] == n - 1) and (x[(nn / 2) - 1 - j] == n or x[(nn / 2) - 1 - j] == n - 1):
                n -= 2
                j += 1
            elif (x[(nn / 2) + j] == j * 2 + 1 or x[(nn / 2) + j] == j * 2 + 2) and (x[(nn / 2) - 1 - j] == j * 2 + 1 or x[(nn / 2) - 1 - j] == j * 2 + 2):
                n -= 2
                j += 1
            else:
                ans = "NO"
                break
        else:
            if x[n/2] == n:
                n -= 1
            elif x[n/2] == j * 2 + 1:
                n -= 1
            else:
                ans = "NO"
                break
    o.write("Case #{}: {}\n".format(i + 1, ans))