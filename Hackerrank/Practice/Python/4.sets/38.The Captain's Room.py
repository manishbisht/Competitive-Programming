# Enter your code here. Read input from STDIN. Print output to 
K,arr = int(input()),list(map(int, input().split()))

myset = set(arr)

print(((sum(myset)*K)-(sum(arr)))//(K-1))
