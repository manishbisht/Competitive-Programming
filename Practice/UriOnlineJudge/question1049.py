# coding: utf-8


classificacao = raw_input()
tipo = raw_input()
especie = raw_input()

if (classificacao == "vertebrado"):
	if(tipo == "ave"):
		if (especie == "carnivoro"):
			print("aguia")
		elif(especie == "onivoro"):
			print("pomba")
	elif (tipo == "mamifero"):
		if (especie == "onivoro"):
			print("homem")
		elif(especie == "herbivoro"):
			print("vaca")

elif(classificacao == "invertebrado"):
	if(tipo == "inseto"):
		if (especie == "hematofago"):
			print ("pulga")
		elif(especie == "herbivoro"):
			print ("lagarta")
	elif(tipo == "anelideo"):
		if (especie == "hematofago"):
			print("sanguessuga")
		elif(especie == "onivoro"):
			print("minhoca")
			
