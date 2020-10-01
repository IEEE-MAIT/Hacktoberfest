//Problem link - https://codeforces.com/problemset/problem/1407/B

    #include<bits/stdc++.h>
    using namespace std;
    int gcd(int a,int b)
    {
        if(b==0)
        return a;
        return gcd(b,a%b);
    }
    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int t;
        cin>>t;
        while(t--)
        {
            int n,g,max=INT_MIN,index;
            cin>>n;
            vector<int>a(n);
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
            sort(a.begin(),a.end());
            vector<int>c;
            c.push_back(a[n-1]);
            g=a[n-1];
            a[n-1]=-1;
            for(int i=1;i<n;i++)
            {
                 max=INT_MIN,index=0;
                for(int j=0;j<n;j++)
                {
                   
                    if(a[j]!=-1)
                    {
                    if(gcd(g,a[j])>=max)
                    {
                        max=gcd(g,a[j]);
                        index=j;
                    }
                    }
                }
                g=gcd(g,a[index]);
                c.push_back(a[index]);
                a[index]=-1;
            }
            for(int i=0;i<c.size();i++)
            {
                cout<<c[i]<<" ";
            }
            cout<<"\n";
        }
        return 0;
    }