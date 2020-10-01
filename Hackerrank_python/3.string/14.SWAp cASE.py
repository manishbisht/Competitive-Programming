def swap_case(s):
    a=''
    for i in s:
        if i.islower()==True:
            a+=i.upper()
        else:
            a+=i.lower()
    return a

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
    
    
    
########################another method#############
    def swap_case(s):
    return s.swapcase()

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
