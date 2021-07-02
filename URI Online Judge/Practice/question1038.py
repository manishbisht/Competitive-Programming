#coding: utf-8


num = raw_input().split()
opc = int(num[0])
qtd = int(num[1])


if (opc == 1):
	print("Total: R$ %.2f" % (4.0 * qtd))
elif (opc == 2):
	print("Total: R$ %.2f" % (4.5* qtd))
elif (opc == 3):
	print("Total: R$ %.2f" % (5.0 * qtd))
elif (opc == 4):
	print("Total: R$ %.2f" % (2.0 * qtd))
else:
	print("Total: R$ %.2f" % (1.5 * qtd))

