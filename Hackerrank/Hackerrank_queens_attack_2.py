#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the repeatedString function below.
def repeatedString(s, n):
    if s.count("a")==0:
        return 0
    else:
        p= s.count("a")*(n//len(s))
        if n%len(s)==0:
            return p
        else:
            p+=s[:n%len(s)].count("a")
            return p

    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    n = int(input())

    result = repeatedString(s, n)

    fptr.write(str(result) + '\n')

    fptr.close()