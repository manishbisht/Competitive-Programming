n = int(raw_input())
for i in xrange(0, n):
	s = raw_input()
	s = s.replace('a', 'v#nt&r#s!ty').replace('e', 'v#nt&r#s!ty').replace('i', 'v#nt&r#s!ty').replace('o', 'v#nt&r#s!ty').replace('u', 'v#nt&r#s!ty').replace('A', 'v#nt&r#s!ty').replace('E', 'v#nt&r#s!ty').replace('I', 'v#nt&r#s!ty').replace('O', 'v#nt&r#s!ty').replace('U', 'v#nt&r#s!ty')
	s = s.replace('#', 'e').replace('&', 'u').replace('!', 'i')
	print s
