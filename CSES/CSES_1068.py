def weird_algo(algo):
    if algo[-1]==1:
        return algo
    if algo[-1]%2==0:
        algo.append(algo[-1]//2)
        return weird_algo(algo)
    else:
        algo.append(algo[-1]*3+1)
        return weird_algo(algo)


n = int(input())
if n==1:
    print(n)
else:
    algo = [n]
    s = list(map(str, weird_algo(algo)))
    print(" ".join(s))