#!/bin/python3
from collections import*
import math
import os
import random
import re
import sys



if __name__ == '__main__':
    s = sorted(input())
    r=Counter(s)
    r=r.most_common(3)
for i in r:    
    print(*i)
