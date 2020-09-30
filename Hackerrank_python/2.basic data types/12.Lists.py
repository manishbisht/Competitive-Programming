if __name__ == '__main__':
    N=int(input())
    lis=[]
    for _ in range(0,N):
        x=input().split()
        if x[0]=="insert":
            lis.insert(int(x[1]),int(x[2]))
        elif x[0]=="print":
            print(lis)  
        elif x[0]=="remove":
            lis.remove(int(x[1]))
        elif x[0]=="append":
            lis.append(int(x[1]))
        elif x[0]=="sort":
            lis.sort()
        elif x[0]=="pop":
            lis.pop()
        elif x[0]=="reverse":
            #lis=lis[::-1] #This process can also be work
            lis.reverse()

            
