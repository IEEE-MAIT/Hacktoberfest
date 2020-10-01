#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
#define int long long
int32_t main()
{
    FIO
    int n; cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n&1) n=3*n+1;
        else n=n/2;
        cout<<n<<" ";
    }
    cout<<"\n";
    return 0;
 
}
