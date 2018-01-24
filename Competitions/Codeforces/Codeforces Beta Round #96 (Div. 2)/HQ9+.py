s = raw_input()
for i in xrange(0, len(s)):
	if s[i] == 'H' or s[i] == 'Q' or s[i] == '9':
		print "YES"
		exit()
print "NO"
