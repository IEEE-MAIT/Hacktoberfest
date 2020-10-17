#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl "\n"
using namespace std;

int main(){
  ll t;
  cin>>t;
  while (t--) {
    ll n;
    cin>>n;
    set<ll> s1;
    for(ll i=0;i<n;i++){
      ll a;
      cin>>a;
      s1.insert(a);
    }
   if(s1.count(0)){
     cout<<s1.size()-1<<endl;
   }
   else{
     cout<<s1.size()<<endl;
   }
}
return 0;
}
