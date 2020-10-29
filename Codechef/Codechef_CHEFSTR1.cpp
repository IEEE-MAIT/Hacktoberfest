#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long int
#define tc ll tetra;cin>>tetra;while(tetra--)
#define lp(i,j,k) for(ll i=j;i<k;i++)
#define lpr(i,j,k) for(ll i=j;i>=k;i--)
#define F first
#define S second
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define vec(pk,pk1) vector<ll> pk(pk1,0)
#define vect vector<ll> v
#define vpair(love_pair) vector<pair<ll,ll> > love_pair
#define pb(x) push_back(x)
 
int main()
{
	fast
	tc{
		ll n;cin>>n;
		ll ans=0;
		vec(v,n);lp(i,0,n)cin>>v[i];
		lp(i,1,n)ans+=(abs(v[i]-v[i-1])-1);
		cout<<ans<<endl;
	}
	
}
