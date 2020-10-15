#coding: utf-8

sal = float(raw_input())

if (sal <= 2000): print("Isento")
elif(2000 < sal <= 3000): print("R$ %.2f" % ((sal- 2000) * 0.08))
elif(3000 < sal <= 4500): print("R$ %.2f" % ((sal - 3000) * 0.18 + (1000 * 0.08)))
elif(4500< sal): print("R$ %.2f" %((sal - 4500) *0.28 + (1500 *0.18) + (1000 * 0.08)))
