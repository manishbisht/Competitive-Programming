def mutate_string(string, position, character):
    
    p=list(s)
    p[int(position)]=c
    p=''.join(p)
    

    return p

if __name__ == '__main__':
    s = input()
    i, c = input().split()
    s_new = mutate_string(s, int(i), c)
    print(s_new)
