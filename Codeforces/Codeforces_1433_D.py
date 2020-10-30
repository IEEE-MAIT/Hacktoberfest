for _ in range(int(input())) :
    n = int(input())
    l = list(map(int,input().split()))
    vis = [False]*n
    q = [0]
    vis[0]=True
    ans = []
    while len(q) :
        head = q.pop(0)
        for i in range(n):
            if not vis[i] and l[i]!=l[head] :
                ans.append([head+1,i+1])
                vis[i] = True
                q.append(i)
    if False in vis :
        print("NO")
    else :
        print("YES")
        for i in ans :
            print(*i)


