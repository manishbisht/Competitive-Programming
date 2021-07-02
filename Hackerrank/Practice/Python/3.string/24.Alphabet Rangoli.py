def print_rangoli(size):
    # your code goes here
    #n=size
    l1=list(map(chr,range(97,123)))
    x=l1[n-1:0:-1]+l1[0:n]
    #x=l1[n-1::-1]+l1[1:n] This is also true
    y=len('-'.join(x))
    for i in range(1,n):
        print('-'.join(l1[n-1:n-i:-1]+l1[n-i:n]).center(y,'-'))
    for i in range(n,0,-1):
        print('-'.join(l1[n-1:n-i:-1]+l1[n-i:n]).center(y,'-'))    


if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)
###################ALT####################
import string
def print_rangoli(size):
    lt###
    alpha = string.ascii_lowercase

    L = []
    for i in range(n):
        s = "-".join(alpha[i:n])
        L.append((s[::-1]+s[1:]).center(4*n-3, "-"))
    print('\n'.join(L[:0:-1]+L))   


if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)
