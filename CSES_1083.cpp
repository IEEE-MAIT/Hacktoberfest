
#include<bits/stdc++.h>
using namespace std;
#define int    long long

#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


 
 
const int N=5*(1e6)+10;

int a[N];

int32_t main()
{
    FIO
    int n; cin>>n;
    n--;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        int c=a[i];
        while(c-1>=0 && a[c-1]!=c && c-1!=i){
            int p=a[c-1];
            a[c-1]=c;
            c=p;
        }
        a[i]=c;
    }
    int ans=n+1;
    for(int i=0;i<n;i++){
        if(a[i]!=i+1) ans=i+1;
    }
    cout<<ans<<"\n";
    return 0;
 
}
