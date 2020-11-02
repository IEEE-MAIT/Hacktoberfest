from math import sqrt

n = int(input())
mean = int(input())
std_dev = int(input())
interval = float(input())
z = float(input())
print(round(mean - (std_dev / sqrt(n)) * z, 2))
print(round(mean + (std_dev / sqrt(n)) * z, 2))
