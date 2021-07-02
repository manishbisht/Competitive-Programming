def print_formatted(number):
    # your code goes here
    width=len(str(bin(number))[2:])
    for i in range(1,number+1):
        print(str(i).rjust(width," "),oct(i)[2:].rjust(width," "),hex(i)[2:].upper().rjust(width," "),bin(i)[2:].rjust(width," "))

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)
