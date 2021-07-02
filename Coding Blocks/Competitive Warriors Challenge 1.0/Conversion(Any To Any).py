base_symbols='0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz'
def convertBase(n, sb, db):
    return toDigits(fromDigits(n, sb), db)
    
def fromDigits(digits, b):
    n = 0
    for d in digits:
        n = b * n + base_symbols[:b].index(d)
    return n

def toDigits(n, b):
    digits = ''
    while n > 0:
        digits = base_symbols[n % b] + digits
        n  = n // b
    return digits

sb = int(raw_input())
db = int(raw_input())
n = raw_input()
print convertBase(n, sb, db)

