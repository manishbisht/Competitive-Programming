#!/bin/python3


import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input().strip())
#own code    
if n%2==1:
    print ("Weird")
else:
    if n>=2 and n<=5:
            print ("Not Weird")
    elif n>=6 and n<=20:
        print ("Weird")
    elif n>20:
            print ("Not Weird")
            
