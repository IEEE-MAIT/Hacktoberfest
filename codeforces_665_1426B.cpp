//Problem link - https://codeforces.com/problemset/problem/1426/B


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
          ll n, m; 
          bool flag = false;
          cin>>n>>m;
          
          ll mat[2][2];
          for(int i = 0; i<n; i++)
          {
               cin>>mat[0][0]>>mat[0][1]>>mat[1][0]>>mat[1][1];
               if(mat[0][1]==mat[1][0])
               {
                    flag = true;
               }
          }
          if(m%2!=0)
          {
          cout<<"NO\n";
          continue;
          }
          if(flag)
          cout<<"YES\n";
          else
          cout<<"NO\n";
     }
     return 0;
}