# Complete the cutTheSticks function below.
def cutTheSticks(arr):
    l=[]
    l.append(len(arr))
    arr.sort()
    i=0
    c=0
    while(sum(arr)!=0):
        if(len(arr[i:])==0):
            break
        x=min(arr[i:])
        for j in range(i,len(arr)):
            arr[j]-=x
        c=arr[i:].count(0)
        y=len(arr[i:])
        z=y-c
        if(z==0):
            break
        l.append(z)
        i+=c
    return l