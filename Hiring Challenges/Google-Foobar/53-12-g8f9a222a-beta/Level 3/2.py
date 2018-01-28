def answer(start, length):
	end = start + length * length
	result = 0
	for i in xrange(start, end, length):
		#print str(i) + "," + str(i+length-1)
		if i % 2 == 0:
			if length % 4 == 1:
				result = result ^ (i+length-1)
			elif length % 4 == 2:
				result = result ^ 1
			elif length % 4 == 3:
				result = result ^ 1 ^ (i+length-1)
		else:
			if length % 4 == 1:
				result = result ^ i
			elif length % 4 == 2:
				result = result ^ i ^ (i+length-1)
			elif length % 4 == 3:
				result = result ^ i ^ 1
			else:
				result = result ^ i ^ (i+length-1) ^ 1
		length = length - 1
	return result
print answer(0, 6)
print answer(0, 3)
print answer(17, 4)
print answer(1, 1)
print answer(0, 4)
print 0 ^ 1 ^ 2 ^ 3 ^ 4 ^ 5 ^ 6 ^ 8 ^ 9 ^ 12
