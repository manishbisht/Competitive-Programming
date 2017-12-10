ans = []
text = raw_input().strip()
def subsequence(instr, outstr, i):
    if len(instr) == i:
        ans.append(outstr)
        return
    
    x = str(ord(instr[i]))
    n = len(x)
    outstr += x
    subsequence(instr, outstr, i + 1)
    outstr = outstr[:-n]
    outstr += instr[i]
    subsequence(instr, outstr, i + 1)
    outstr = outstr[:-1]
    subsequence(instr, outstr, i + 1)
        
print 3 ** len(text)
subsequence(text, "", 0)
ans.reverse()
for x in ans:
    print x,
