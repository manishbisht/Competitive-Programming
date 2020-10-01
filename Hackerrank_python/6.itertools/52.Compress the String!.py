# Enter your code here. Read input from STDIN. Print output to STDOUT
import itertools
s=input()
x=((len(list(p)),int(k)) for k,p in itertools.groupby(s))
print(*x)  
