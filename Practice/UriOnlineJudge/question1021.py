value = float(input());
hundred = fifty = twenty = ten = five = two = one = 0;
fiftycents = twentyfivecents = tencents = fivecents = cents = 0;

if int(value/100) >= 1:
	hundred = int(value/100)
	value -= (hundred * 100)

if int(value/50) >= 1:
	fifty = int(value/50)
	value -= (fifty * 50)

if int(value/20) >= 1:
	twenty = int(value/20.00)
	value -= (twenty * 20)

if int(value/10) >= 1:
	ten = int(value/10)
	value -= (ten * 10)

if int(value/5) >= 1:
	five = int(value/5)
	value -= (five*5)

if int(value/2) >= 1:
	two = int(value/2)
	value -= (two * 2)

if int(value/1) >= 1:
	one = int(value/1)
	value -= (one * 1)

if int(value/0.50) >= 1:
	fiftycents = int(value/0.50)
	value -= (fiftycents * 0.50)

if int(value/0.25) >= 1:
	vintecincents = int(value/0.25)
	value -= (twentyfivecents * 0.25)

if int(value/0.10) >= 1:
	tencents = int(value/0.10)
	value -= (tencents * 0.10)

if int(value/0.05) >= 1:
	fivecents = int(value/0.05)
	value -= (fivecents * 0.05)

if int(value/0.01) >= 0.998:
	cents = int(value/0.01)
	value -= (cents * 0.01)

print("NOTAS:")
print("%d nota(s) de R$ 100.00" % hundred)
print("%d nota(s) de R$ 50.00" % fifty)
print("%d nota(s) de R$ 20.00" % twenty)
print("%d nota(s) de R$ 10.00" % ten)
print("%d nota(s) de R$ 5.00" % five)
print("%d nota(s) de R$ 2.00" % two)
print("MOEDAS:");
print("%d moeda(s) de R$ 1.00" % one)
print("%d moeda(s) de R$ 0.50" % fiftycents)
print("%d moeda(s) de R$ 0.25" % twentyfivecents)
print("%d moeda(s) de R$ 0.10" % tencents)
print("%d moeda(s) de R$ 0.05" % fivecents)
print("%d moeda(s) de R$ 0.01" % cents)
