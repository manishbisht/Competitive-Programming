#coding: utf-8

coord = raw_input().split()
x = float(coord[0])
y = float(coord[1])

if (x==y==0):
    print("Origem\n")
elif(x==0):
    print("Eixo X\n")
elif(y==0):
    print("Eixo Y\n")
elif(x>0)and(y>0):
    print("Q1\n")
elif(x<0)and(y>0):
    print("Q2\n")
elif(x<0) and (y<0):
    print("Q3\n")
elif(x>0)and(y<0):
    print("Q4\n")
