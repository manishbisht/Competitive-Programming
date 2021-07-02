if __name__ == '__main__':
    s = input()
    x=type(s)
    for met in[x.isalnum,x.isalpha,x.isdigit,x.islower,x.isupper]:
        print (any(met(i) for i in s))
