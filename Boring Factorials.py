# 22nd June 2024

from os import *
from sys import *
from collections import *
from math import *

def fact(n):
    if n <= 1:
        return 1
    return n * fact(n - 1)


def boringFactorials(n, p):
    # Write your code here.
    return fact(n) % p
    pass
