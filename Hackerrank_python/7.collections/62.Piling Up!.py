from collections import deque
for i in range(int(input())):
    x=int(input())
    lst=map(int,input().split())
    lst1=deque(lst)
    right_most=lst1.pop()
    left_most=lst1.popleft()
    #current_value=left_most if left_most>right_most else right_most
    if left_most>right_most:
        current_value=left_most
    else:
        current_value=right_most
    for _ in range(len(lst1)):
        if left_most>=right_most and left_most<=current_value:
            current_value=left_most
            left_most=lst1.popleft()
            latest=left_most
        elif left_most<right_most and right_most<=current_value:
            current_value=right_most
            right_most=lst1.pop()
            latest=right_most
        else:
            break
    if latest>current_value:
        print("No")
    else:
        print("Yes")  
