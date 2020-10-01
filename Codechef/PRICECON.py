'''
Chef has N items in his shop (numbered 1 through N); for each valid i, the price of the i-th item is Pi. Since Chef has very loyal customers, all N items are guaranteed to be sold regardless of their price.

However, the government introduced a price ceiling K, which means that for each item i such that Pi>K, its price should be reduced from Pi to K.

Chef's revenue is the sum of prices of all the items he sells. Find the amount of revenue which Chef loses because of this price ceiling.
'''
# cook your dish here
for _ in range(int(input())):
    n,k=map(int,input().split())
    p=list(map(int,input().split()))
    s=sum(p)
    for i in range(n):
        if p[i]>k:
            p[i]=k
    print(s-sum(p))
