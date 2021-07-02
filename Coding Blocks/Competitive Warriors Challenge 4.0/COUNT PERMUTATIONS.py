text = raw_input().strip()
n = len(text)
text = list(text)
ans = set()

def permutation(text, i, n):
    if n == i:
        ans.add(''.join(text))
        return
    
    for j in xrange(i, n + 1):
        text[i], text[j] = text[j], text[i]
        permutation(text, i + 1, n)
        text[i], text[j] = text[j], text[i]
        
permutation(text, 0, n - 1)
ans = list(ans)
ans = sorted(ans)
for x in ans:
    print x
