//Problem Link: https://www.codechef.com/problems/THREEDIF
#include<bits/stdc++.h>
# define ll long long 

using namespace std;
const ll m =1e9+7;
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    vector<ll>v(3);
    for(int i=0;i<3;i++)
        {
            cin>>v[i];
            //v[i]=(v[i])%m;
        }
        sort(v.begin(),v.end());
        ll r=1;
        for(int i=0;i<3;i++)
        {
           r=(r*((v[i]-i)%m))%m;
        }

        cout<<r<<endl;
  }
}
