# Enter your code here. Read input from STDIN. Print output to STDOUT
n, m = map(int,input().split())
pattern = [('.|.'*(2*i + 1)).center(m, '-') for i in range(n//2)]
print('\n'.join(pattern + ['WELCOME'.center(m, '-')] + pattern[::-1]))
#another method
x, y = map(int,input().split())
c='.|.'
#first half
for i in range(x//2):
    print((c*i).rjust((y-3)//2,'-')+c+(c*i).ljust((y-3)//2,'-'))

#center
print('WELCOME'.center(y,'-'))
#second half
j=x//2-1
for _ in range(x//2):
    print((c * j).rjust((y - 3) // 2, '-') + c + (c * j).ljust((y - 3) // 2, '-'))
    j-=1
