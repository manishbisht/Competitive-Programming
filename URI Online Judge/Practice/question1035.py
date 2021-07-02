#coding: utf-8
 
numbers = raw_input().split()
a = int(numbers[0])
b = int(numbers[1])
c = int(numbers[2])
d = int(numbers[3])
if( (b > c) and (d > a) and ((c + d) > (a + b)) and (c > 0) and (d > 0) and (a % 2 == 0)):
	print("Valores aceitos")
else:
	print("Valores nao aceitos")
