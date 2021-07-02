#coding: utf-8;


num = raw_input().split()

a = int(num[0])
b = int(num[1])
c = int(num[2])

if (a >= b):
	a,b = b,a
if(a >= c):
	a,c = c,a
if( b >= c):
	b,c = c,b

print ("%d\n%d\n%d\n" %(a,b,c))
for x in range(len(num)):
	print num[x]
