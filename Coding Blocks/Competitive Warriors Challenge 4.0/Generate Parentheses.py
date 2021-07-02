def printans(s, n, o, c):
    if c == n:
        print s
        return
    
    if o > c:
        printans(s + ')', n, o, c + 1)
    if o < n:
        printans(s + '(', n, o + 1, c)
    
    
n = int(raw_input())
printans('', n, 0, 0)
