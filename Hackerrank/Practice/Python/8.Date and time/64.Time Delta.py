import math
import os
import random
import re
import sys
from datetime import*

# Complete the time_delta function below.
def time_delta(t1, t2):
    time_formatt='%a %d %b %Y %H:%M:%S %z'
    t1=datetime.strptime(t1,time_formatt)
    t2=datetime.strptime(t2,time_formatt)
    absolute_difference=str(int(abs((t1-t2).total_seconds())))
    return  absolute_difference



if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        t1 = input()

        t2 = input()

        delta = time_delta(t1, t2)

        fptr.write(delta + '\n')

    fptr.close()
