cube = lambda x: x**3# complete the lambda function 
def fibonacci(n):
     # return a list of fibonacci numbers
     lis = [0,1]
     for i in range(2,n):
         lis.append(lis[i-2] + lis[i-1])
     return(lis[0:n]) # complete the lambda function


if __name__ == '__main__':
    n = int(input())
    print(list(map(cube, fibonacci(n))))
