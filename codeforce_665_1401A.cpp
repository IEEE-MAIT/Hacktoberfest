    //Problem Link - https://codeforces.com/problemset/problem/1401/A
    
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
              ll n, k;
              cin >> n >> k;
              if(n<=k)
              cout << (k-n) <<"\n";
              else
              {
                   if(n%2==0 && k%2==0 || n%2!=0 && k%2!=0)
                   {
                        cout << "0" <<"\n";
                   }
                   else
                   {
                        cout << "1" <<"\n"; 
                   }
              }
         }
         return 0;
    }