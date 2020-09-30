# Enter your code here. Read input from STDIN. Print output to STDOUT
n=int(input())
s=set(map(int,input().split()))
m=int(input())
for _ in range(m):
    (operation_name,length)=input().split()
    list_of_the_elements=set(map(int,input().split()))
    if operation_name=="intersection_update":
        s.intersection_update(list_of_the_elements)
    elif operation_name=="update":
        s.update(list_of_the_elements)
    elif operation_name=="symmetric_difference_update":
        s.symmetric_difference_update(list_of_the_elements)
    else: 
        s.difference_update(list_of_the_elements)
print(sum(s))  
