#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'getTotalX' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER_ARRAY a
#  2. INTEGER_ARRAY b
#

def getTotalX(a, b):
    # Write your code here
    l = []      # all possible cases
    l2 = []     # cases that meet a
    l3 = []     # cases that meet a & b
    temp = []
    x = min(a)
    l.append(x)
    while x < min(b):
        x += min(a)
        l.append(x)
    for i in l:
        temp = [i%j for j in a]
        if sum(temp) == 0:
            l2.append(i)
    for i in l2:
        temp = [j%i for j in b]
        if sum(temp) == 0:
            l3.append(i)
    return(len(l3))
    


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    arr = list(map(int, input().rstrip().split()))

    brr = list(map(int, input().rstrip().split()))

    total = getTotalX(arr, brr)

    fptr.write(str(total) + '\n')

    fptr.close()
