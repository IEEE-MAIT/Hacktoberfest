#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,N,a[200010];
    cin>>T;
    for (int t=0;t<T;t++){
        cin>>N >>a[0];
        bool flag = 0;
        for (int i=1;i<N;i++){
            cin>>a[i];
            if (a[i]!=a[0]){
                flag=1;
            }
        }
        if (flag==0){
            cout<<1 <<endl;
            for (int i=0;i<N;i++){
                cout<<"1 ";
            }
        }
        else {
            if (N%2==0){
                cout<<2 <<endl;
                for (int i=0;i<N/2;i++){
                    cout<<"1 2 ";
                }
            }
            else {
                int ans[N],i;
                ans[0] = 1;
                for (i=1;i<N-1 and a[i]!=a[i-1];i++){
                    ans[i] = 3 - ans[i-1]; 
                }
                if (i<N-1 and a[i]==a[i-1]){
                    ans[i] = ans[i-1];
                    i++;
                }
                for (;i<N-1;i++){
                    ans[i] = 3 - ans[i-1];
                }
                for (int x=1;x<=3;x++){
                    if (!((a[N-2]!=a[N-1] and ans[N-2]==x) or (a[0]!=a[N-1] and ans[0]==x))){
                        ans[N-1] = x;
                        break;
                    }
                }
                cout<<max(2,ans[N-1]) <<endl; 
                for (int i=0;i<N;i++){
                    cout<<ans[i] <<" ";
                }
            }
        }
        cout<<endl;
    }
}
