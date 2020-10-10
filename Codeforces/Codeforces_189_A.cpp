/*
    Problem link: https://codeforces.com/problemset/problem/189/A

    The problem asks to find the maximum number of pieces a ribbon of given length can be cut
    such that each of the smaller ribbon pieces has length a or b or c.
    Read through the code and follow the comments for understanding how the solution works.

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

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n,a,b,c;
    cin >> n >> a >> b >> c;
    ll M = 0;
    ll small = min(a,min(b,c));
    if(n%small == 0)
        cout << n/small;                    // clear case.
    else{
        ff(i,0,n){                                  // as the contraints are less, we can itterate through all 
            if(i*a <= n)                            // the n and find the answer.
            ff(j,0,n){
                ll x = n - (i*a + j*b);             // we are basically finding coeff to the equation:
                if(x%c == 0 && x >= 0){             // n = x*a + y*b + z*c
                    M = max(M, i+j+(x/c));          // where n,a,b,c are given
                }                                   // x == i, y == j, z == x/c
            }                                       // note the max value of x+y+z found after every itteration
        }                               
        cout << M << '\n';                          // print max value.
    }
}
