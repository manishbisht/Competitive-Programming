#coding: utf-8

num = raw_input().split()
first = float(num[0])
second = float(num[1])
third = float(num[2])
fourth = float(num[3])

media = ((first * 2) + (second * 3) + (third * 4) + (fourth * 1))/10
print("Media: %.1f" % media)

if(media < 5):
	print("Aluno reprovado.")
elif( media >= 7):
	print("Aluno aprovado.")
elif(media >= 5 and media < 7):
	print ("Aluno em exame.")
	final = float(raw_input())
	print ("Nota do exame: %.1f" % final)
	media_final = (media + final)/ 2
	
	if (media_final >= 5):
		print("Aluno aprovado.")
	else:
		print("Aluno reprovado.")
	print("Media final: %.1f" % media_final)


