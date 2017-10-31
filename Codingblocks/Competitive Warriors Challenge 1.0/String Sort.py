n = int(raw_input())
ans = []
for i in xrange(n):
    data = raw_input()
    ans.append(data)
ans = sorted(ans)
for i in xrange(n-1):
    if (ans[i].find(ans[i+1]) or ans[i+1].find(ans[i])) and len(ans[i+1]) > len(ans[i]):
        temp = ans[i]
        ans[i] = ans[i+1]
        ans[i+1] = temp
for i in ans:
    print i
