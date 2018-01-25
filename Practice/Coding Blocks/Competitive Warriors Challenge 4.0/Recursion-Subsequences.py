ans = []
text = raw_input().strip()
def subsequence(instr, outstr, i):
    if len(instr) == i:
        ans.append(outstr)
        return
    
    outstr += instr[i]
    subsequence(instr, outstr, i + 1)
    subsequence(instr, outstr[:-1], i + 1)
    
        
print 2 ** len(text)
subsequence(text, "", 0)
ans.reverse()
for x in ans:
    print x,
