// problem link -https://codeforces.com/contest/1405/problem/C 
    
    #include<bits/stdc++.h>
    using namespace std;
    void solve()
    {
                long n,k,flag=0;
            cin>>n>>k;
            string s;
            cin>>s;
            for(int i=0;i<k;i++){
                if(s[i]=='?'){
                    for(int j=i+k;j<n;j+=k){
                        if(s[j]!='?'){
                            s[i]=s[j];
                            break;
                        }
                    }
                }
            }
            for(int i=0;i<k;i++){
                if(s[i]!='?'){
                    for(int j=i+k;j<n;j+=k){
                        if(s[j]=='?')
                            s[j]=s[i];
                        else if(s[j]!=s[i]){
                            cout<<"NO"<<"\n";
                           return;
                        }
                    }
                }
            }
             int one=0,zero=0;
            for(int i=0;i<k;i++){
                if(s[i]=='1')
                    one++;
                if(s[i]=='0')
                    zero++;
            }
            if(one<=(k/2) && zero<=(k/2))
                cout<<"YES"<<"\n";
            else{
                cout<<"NO"<<"\n";
            }
    }
    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        long t;cin>>t;
        while(t--)
        {
                solve();
        }
        return 0;
    }