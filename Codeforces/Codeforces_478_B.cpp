/*
    Problem link: https://codeforces.com/problemset/problem/478/B

    The problem asks to find the maximum number of pairs of friends that can be formed maintaining 
    m teams between n players. And friends can be formed in same team only.

    Clearly if m = 1, all players would be in same team and nC2 number of friends would be formed.
    Otherwise, If we divide all players equally into the teams, we would get min number of friends 
    formed while to maximize the number of friends formed,we put not more that 1 player in each m teams
    and the remaining to any one of the team, making teams size maximum and forming maximum number of 
    friends.

    Author: __PRAKHAR__  (codeforces id)
*/


#include<bits/stdc++.h>

#define ll long long int
#define ff(i,a,b) for(ll i = a; i < b; i++)
#define bf(i,b,a) for(ll i = b-1; i >= a; i--)
#define itf(i,a) for(auto i = a.begin(); i != a.end(); i++)
#define itfr(i,a) for(auto i = a.rbegin(); i != a.rend(); i++)
#define MII map<ll,ll> 
#define MCI map<char,ll>
#define MSI map<string,ll>
#define VI vector<ll> 
#define VC vector<char> 
#define VS vector<string> 
#define MP make_pair
#define tc ll t; cin>>t; while(t--)
#define PB push_back
#define MP make_pair
#define DISPV(v) itf(i,v) cout << *i << ' ';
#define DISPM(m) itf(i,m) cout << i->first << ' ' << i->second << endl;

const int MOD = int(1e9) + 7;

using namespace std;

ll C(ll n){
    return n * (n-1) / 2;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n,m;
    cin >> n >> m;
    if(m == 1){
        cout << C(n) << " " << C(n);        
    }
    else{
        ll x = n%m;
        ll min = 0;
        if(x != 0)
            min = x*C(((n/m)+1)) + (m-x)*C((n/m));      // for minimum number of friends
        else
            min = m*C((n/m));
        ll max = C(n-m+1);                              // for maximum number of friends
        cout << min << " " << max;
    }
}
