#include<bits/stdc++.h>
#include<algorithm>

using namespace std; 
int main() 
{ 
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	  int T;
    cin>>T;
   
    while(T--){
        int n;
        cin>>n;
        int a[n];
        vector<int>v;
        int i,j,k,l;
        int f0=0,f1=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                f0++;
            }else f1++;
        }
        if(f0>=(n/2)){
            cout<<f0<<endl;
            for(i=0;i<n;i++){
                if(a[i]==0){
                    cout<<0<<" ";
                }
            }
            cout<<endl;
        }
        else
        {
            if(f1%2==0){
                cout<<f1<<endl;
                for(i=0;i<n;i++){
                    if(a[i]==1 && f1>0){
                        cout<<a[i]<<" ";
                        f1--;
                    }
                }
                cout<<endl;
            }
            else
            {
                f1--;
                cout<<f1<<endl;
                for(i=0;i<n;i++){
                    if(a[i]==1 && f1>0){
                        cout<<a[i]<<" ";
                        f1--;
                    }
                }
                cout<<endl;
            }    
        }
    }    
	return 0; 
} 
