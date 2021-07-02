def minion_game(string):
    # your code goes here
    sum1=0
    sum2=0
    vowel="AEIOU"
    for i in range(len(s)):
        if s[i]  in vowel:
            sum1=sum1+(len(s)-i)
        else:
            sum2=sum2+(len(s)-i)
    if sum1>sum2:
        print("Kevin",sum1)
    elif sum2>sum1:
        print("Stuart",sum2)
    else:
        print("Draw")        

if __name__ == '__main__':
    s = input()
    minion_game(s)
