#coding: utf-8

num = float(raw_input())

def calculaSalario(s, p):
	salario = s + ( s * p)
	print ("Novo salario: %.2f" % salario)
	print ("Reajuste ganho: %.2f" % (s * p))
	print ("Em percentual: %d %%" % ( p*100 ))

if (0 <= num <= 400):
	calculaSalario(num, 0.15)
	
elif (400 < num <= 800):
	calculaSalario(num, 0.12)
	
elif (800 < num <= 1200):
	redjust = num * 0.10
	calculaSalario(num, 0.10)
elif (1200 < num <= 2000):
	calculaSalario(num, 0.07)
	
elif ( 2000 < num ):
	calculaSalario(num,0.04)
	
