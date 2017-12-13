text = raw_input().strip()
n = len(text)
text = list(text)
ans = []

def permutation(text, i, n):
    if n == i:
        if ''.join(text) not in ans:
            ans.append(''.join(text))
        return
    
    for j in xrange(i, n + 1):
        text[i], text[j] = text[j], text[i]
        permutation(text, i + 1, n)
        text[i], text[j] = text[j], text[i]
        
permutation(text, 0, n - 1)
ans = sorted(ans)
for x in ans:
    print x
