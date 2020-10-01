//Problem link - https://codeforces.com/problemset/problem/1405/B

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll t;
        cin>>t;
        while(t--)
        {
            ll n;
            cin>>n;
            ll a[n];
            ll sn=0,sp=0;
            for(ll i=0;i<n;i++)
            {
                cin>>a[i];
            }
            for(int i=0;i<n;i++){
    			if(a[i]<0){
    				if(sp>0){
    					if(sp+a[i]<0)a[i]+=sp,sp=0, sn+=a[i];
    					else sp+=a[i];
    				}
    				else sn+=a[i];
    			}
    			if(a[i]>0)sp+=a[i];
    		}
            cout<<sp<<"\n";
        }
    }