// Problem Link - https://codeforces.com/problemset/problem/1420/A

#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     ll t;
     cin>>t;
     while(t--)
     {
          ll n;
          cin>>n;
          vector<ll> v(n);
          for(ll i = 0; i<n; i++)
          {
               cin>>v[i];
          }
          bool flag = false;
          for(ll i = 1;i<n; i++)
          {
               if(v[i]>=v[i-1]){
               flag = true;
               break;
               }
          }
          if(flag)
          cout<<"YES\n";
          else
          cout<<"NO\n";
     }
     return 0;
}