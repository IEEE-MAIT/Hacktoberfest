
#include<bits/stdc++.h>
using namespace std;

int main()
{
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
 
