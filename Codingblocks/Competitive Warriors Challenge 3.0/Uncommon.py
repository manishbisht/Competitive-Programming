a = raw_input().strip()
b = raw_input().strip()
if a == b:
    print -1
else:
    print max(len(a), len(b))
