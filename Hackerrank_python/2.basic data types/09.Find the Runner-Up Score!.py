if __name__ == '__main__':
    n = int(input())
    arr =list(map(int,input().split()))
    maxx=max(arr)
    temp=0
    while (temp<n):
        if maxx==max(arr):
            arr.remove(max(arr))
        temp+=1 
    print (max(arr))
    
