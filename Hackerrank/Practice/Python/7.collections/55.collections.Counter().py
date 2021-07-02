# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import*
no_of_shoes=int(input())
size_of_shoes_in_the_shop=Counter(map(int,input().split()))
Number_of_customer=int(input())
amount_of_money_earned=0

for _ in  range (Number_of_customer):
    size,price=map(int,input().split())
    
    if size_of_shoes_in_the_shop[size]>0:
        size_of_shoes_in_the_shop[size]-=1
        amount_of_money_earned+=price
print(amount_of_money_earned)        
