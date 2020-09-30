def average(array):
    # your code goes here
    t=sum(set(array))
    p=len(set(array))
    average=t/p
    return average

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)
