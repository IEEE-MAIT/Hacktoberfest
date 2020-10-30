n,m,k = list(map(int,input().split()))
grid = [ list(map(int,input().split())) for _ in range(n) ]
ans = 0
for i in range(n) :
    jod = sum(grid[i])
    for ps in range(jod,k-1,-1):
        
