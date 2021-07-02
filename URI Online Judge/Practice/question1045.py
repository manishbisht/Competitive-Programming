# coding:utf-8

def ordena_dec(num):
	for y in range(2):
		for x in range(2):
			if (float(num[x]) <= float(num[x + 1])):
				num[x],num[x+1] = num[x+1],num[x]
	return num



num = raw_input().split()
num = ordena_dec(num)
a = float(num[0])
b = float(num[1])
c = float(num[2])

if (a < b + c):
	if ((a ** 2) == b**2 + c**2):
		print "TRIANGULO RETANGULO"
	elif ((a ** 2) > b**2 + c**2):
		print "TRIANGULO OBTUSANGULO"
	elif ((a ** 2) <= b**2 + c**2):
		print "TRIANGULO ACUTANGULO"
	
	if( a == b == c):
		print "TRIANGULO EQUILATERO"
	elif(a == b or b == c or a == c):
		print "TRIANGULO ISOSCELES"
	
else:
	print "NAO FORMA TRIANGULO"
