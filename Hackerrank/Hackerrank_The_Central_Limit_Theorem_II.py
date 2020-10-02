import math

def norm_dist(mean,std_dev,x):
    erf_parameter = (x - mean) / (std_dev)
    return 0.5 + 0.5 *(math.erf(erf_parameter / math.sqrt(2)))

max_weight = int(input())
n_box = int(input())
mean = float(input())
std_dev = float(input())
mean_sum = n_box * mean
std_dev_sum = math.sqrt(n_box) * std_dev
print(round(norm_dist(mean_sum,std_dev_sum, max_weight), 4))
