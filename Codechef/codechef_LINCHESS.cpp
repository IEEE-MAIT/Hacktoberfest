#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main(){
  ll t;
  cin>>t;
  while(t--){
    int count=0,p,x;
    int n,k;
    cin>>n>>k;
    vector<int>pawns;
     vector<int>beat;
    for(int i=0;i<n;i++){
      cin>>p;
      pawns.pb(p);
    }
    for(int i=0;i<n;i++){
      if(k%(pawns.at(i))==0){
        beat.pb(i);
      }
    }
    if(beat.empty()){
      cout<<"-1"<<endl;
    }
    else{
       int y=beat.size();
       int x[y],m;
       for(int i=0;i<y;i++){
         int z=beat.at(i);
         x[i]=k/(pawns.at(z))-1 ;
       }
       int min=x[0];
       for(int i=0;i<y;i++){
         if(x[i]<min){
           min=x[i];
        }
       }
       for(int i=0;i<y;i++){
         if(x[i]==min){
            m=i;
         }
       }
       int s=beat.at(m);
       cout<<pawns.at(s)<<endl;
    }

  }
  return 0;
}
