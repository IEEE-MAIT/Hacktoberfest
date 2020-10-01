#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>m;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++){
            if(a[i]+a[j]==m && i<j){
                cout<<i<<" "<<j<<endl;
            }

        }
    }
}
