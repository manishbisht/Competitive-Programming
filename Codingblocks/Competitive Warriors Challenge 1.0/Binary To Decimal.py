text = raw_input()
text = text[::-1]
ans = 0
for i in xrange(len(text)):
    if text[i] == '1':
        ans += 2 ** i
print str(ans)
