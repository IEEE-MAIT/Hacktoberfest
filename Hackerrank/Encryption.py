# Complete the encryption function below.
def remove(string): 
    return string.replace(" ", "") 
def encryption(s):
    remove(s)
    x=len(s)
    n=math.sqrt(x)
    f=math.floor(n)
    c=math.ceil(n)
    l=[]
    for i in range(0, len(s), c):
        l.append(s[i : i + c])
    s2=""
    if(f*c<x):
        f+=1
    for i in range(c):
        try:
            for j in range(f):
                s2+=l[j][i]
            s2+=" "
        except:
            s2+=" "
            continue
    return(s2)