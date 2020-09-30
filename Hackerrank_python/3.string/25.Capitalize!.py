import string
# Complete the solve function below.
def solve(s):
    return (string.capwords(s," "))
    ###we can also use this below process
    #return " ".join(i.capitalize()for i in s.split(" "))

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()
    
