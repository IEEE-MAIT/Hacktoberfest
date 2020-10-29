/*
  Problem link: https://codeforces.com/problemset/problem/230/B
  
  The question asks to check if the given number is a T-prime or not. 
  T-prime number is a number which has exactly three distinct positive divisors.
  If we observe this property then we can say that a number is a T-prime only if 
  it is square of a prime number.
  
  eg. 
  let n = 4;
    then 4 has 1,2,4 as the divisors.
  let n = 9:
    then 9 has 1,3,9 as the divisors.
  let n = 121:
    then 11 has 1,11,121 as the divisors.
    
  Solution: As we found that the number should be a square of a prime number , 
    1) Check if the number is a perfect square or not.
    2) If it is a perfect square number, check if its square root is a prime
       number or not. This can be easily done by using Sieve of Eratosthenes.
    
  Author: __PRAKHAR__   (codeforces id)
  
*/

// Solution:

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
#define tc ll t = 1; cin>>t; while(t--)
#define PB push_back
#define MP make_pair
#define all(x) x.begin(),x.end()
#define DISPV(v) itf(i,v) cout << *i << ' ';
#define DISPM(m) itf(i,m) cout << i->first << ' ' << i->second << endl;

const int MOD = int(1e9) + 7;

using namespace std;
const int M = 10e6+1;
bool prime[M];  

void sieve(){                                       // refer geeksforgeeks article for explaination of the working of sieve of eratosthenes
    memset(prime,true,sizeof(prime));
    prime[1] = false;
    for(int i = 2; i*i < M; i++){
        if(prime[i]){
            for(int p = i*i; p <= M; p += i)
                prime[p] = false;
        }
    }    
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    sieve();    // call the sieve of eratosthenes for the range 10^6 as total range is 1 - 10^12
    tc{
        ll n;
        cin >> n;
        if(ceil(sqrt(n)) == floor(sqrt(n)) && prime[(int)(sqrt(n))] == true)    // check if it is square number or not and if its square root is prime or not
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
