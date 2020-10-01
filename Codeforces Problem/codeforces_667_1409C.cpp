//Problem link - https://codeforces.com/problemset/problem/1409/C

    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        long t;
        cin>>t;
        while(t--)
        {
            long n,x,y,diff,p,k,d,num;
            cin>>n>>x>>y;
            diff=y-x;
            d=n-1;
            while(d>0 && diff%d!=0)
            {
                d--;
            }
            p=diff/d;
            num=y;
            k=n;
            while(k>0 && num>0)
            {
                cout<<num<<" ";
                num=num-p;
                k--;
            }
            num=y;
            while(k>0)
            {
                num=num+p;
                cout<<num<<" ";
                k--;
            }
        }
    }