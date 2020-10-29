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
		ll k;cin>>k;k-=1;
		lp(i,0,8){
			lp(j,0,8){
				if(i==0&&j==0)cout<<"O";
				else if(k>0){
					cout<<".";
					k-=1;
				}
				else cout<<"X";
			}
			cout<<endl;
		}
	}
	
}
