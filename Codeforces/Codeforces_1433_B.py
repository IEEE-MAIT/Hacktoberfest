for _ in range(int(input())) :
    input()
    x = str(input().split())
    l = x.find('1')
    r = x.rfind('1')
    ans = 0
    for i in range(l,r+1):
        ans += x[i]=='0'
    print(ans)
