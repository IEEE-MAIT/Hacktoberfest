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
		ll morty=0,chef=0;
		while(n--){
			string c,m;cin>>c>>m;
			ll pC=0,pM=0;
			lp(i,0,c.length())pC+=(c[i]-'0');
			lp(i,0,m.length())pM+=(m[i]-'0');
			if(pC>pM)chef+=1;
			else if(pC<pM)morty+=1;
			else{
				chef+=1;morty+=1;
			}
			
		}
		if(chef>morty)cout<<"0 "<<chef;
		else if(morty>chef)cout<<"1 "<<morty;
		else cout<<"2 "<<chef;
		cout<<endl;
	}
	
}
