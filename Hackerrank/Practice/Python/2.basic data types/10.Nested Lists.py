marksheet=[]
scoresheet=[]
if __name__ == '__main__':
    for _ in range(int(input())):
        name = input()
        score = float(input())
        marksheet=marksheet+[[name,score]]
        scoresheet+=[score]
    x=sorted(set(scoresheet))[1]
    for n, s in sorted(marksheet):
        if s==x:
            print(n)   

            
