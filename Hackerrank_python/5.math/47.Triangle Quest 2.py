for i in range(1,int(input())+1): #More than 2 lines will result in 0 score. Do not leave a blank line also
    print((10**i-1)**2//81)
#another method
for i in range(1,int(input())+1): #More than 2 lines will result in 0 score. Do not leave a blank line also
    print((pow(10,i)//9)**2)
