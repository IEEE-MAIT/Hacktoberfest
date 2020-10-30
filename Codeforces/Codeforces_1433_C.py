for _ in range(int(input())) :
    n = int(input())
    l = list(map(int,input().split()))
    if len(set(l))==1 :
        print(-1)
    else :
        dom = max(l)
        for i in range(n) :
            if l[i]==dom and ((i>0 and l[i-1]<l[i]) or (i<n-1 and l[i+1]<l[i])) :
                print(i+1)
                break

