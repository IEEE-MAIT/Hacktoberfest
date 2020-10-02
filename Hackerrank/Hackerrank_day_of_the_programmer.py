#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the dayOfProgrammer function below.
def dayOfProgrammer(year):
    if isleap(year)==True:
        return "12.09.{}".format(year)
    else:
        if year==1918:
            return specialyear()
        else:
            return "13.09.{}".format(year)
def isleap(year):
    if year>1918:
        if year%100==0:
            if year%400==0:
                return True
            else:
                return False
        else:
            if year%4==0:
                return True
            else:
                return False
    if year<1918:
        if year%4==0:
            return True
        else:
            return False
def specialyear():
    dd=[31,15,31,30,31,30,31,31,30,31,30,31]
    sum=mm=d=0
    for i in range(12):
        if 256-sum<30:
            d=256-sum
            mm=i+1
            break
        else:
            sum=sum+dd[i]
    return "{}.0{}.1918".format(d,mm)
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    year = int(input().strip())

    result = dayOfProgrammer(year)

    fptr.write(result + '\n')

    fptr.close()