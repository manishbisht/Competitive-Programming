# coding: utf-8

num = raw_input().split()
a = float(num[0])
b = float(num[1])
c = float(num[2])

if( abs(a - b) < c < a + b):
	if (abs(c - a) < b < a + c):
		if (abs(b - c) < a < b + c):
			print ("Perimetro = %.1f" % (a + b + c))
else:
	print("Area = %.1f" % ( (( a + b ) * c )/2))
