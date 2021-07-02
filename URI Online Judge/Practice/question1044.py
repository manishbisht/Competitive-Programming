# coding: utf-8

num = raw_input().split()
a = int(num[0])
b = int(num[1])

if ((a % b == 0 )or (b % a == 0)):
	print ("Sao Multiplos")
else:
	print ("Nao sao Multiplos")	
