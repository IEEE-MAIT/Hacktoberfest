for _ in range(int(input())) :
    x = input()
    num = ''
    ld = 1
    ans = 0
    while num!=x and ld!=10 :
        num += str(ld)
        if len(num)>4:
            ld += 1
            num = str(ld)
        ans += len(num)
    print(ans)
