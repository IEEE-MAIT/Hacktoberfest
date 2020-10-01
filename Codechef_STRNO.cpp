//Problme Link:https://www.codechef.com/APRIL20B/problems/STRNO/
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <map>
#include <iomanip>
#include <cmath>
#include <vector>
#include <set>
using namespace std;
typedef long long ll;
void check(ll n, ll k) 
{ 
    vector<int> fact; 
    while (n%2 == 0) 
    { 
        fact.push_back(2); 
        n /= 2; 
    } 
    for (ll i=3; i*i<=n; i=i+2) 
    { 
        while (n%i == 0) 
        { 
            n = n/i; 
            fact.push_back(i); 
        } 
    } 
  
    if (n > 2) 
        fact.push_back(n); 
    if (fact.size() < k) 
    { 
        cout << "0\n"; 
        return; 
    } 
    cout <<"1\n"; 
} 
int main()
{
 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  /* freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
  */
  ll t;
  cin>>t;
  while(t--)
  {
     ll a,b;
     cin>>a>>b;
     if(b>=a)
     {
         cout<<"0\n";
         continue;
     }
     check(a,b);
  }
  return 0;
}
