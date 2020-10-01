#include <bits/stdc++.h>
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define minheap(a) priority_queue<a,vector<a>,greater<a>>
#define maxheap(a) priority_queue<a>
#define sortv(a) sort(a.begin(),a.end())
#define rsortv(a) sort(a.begin(),a.end(),greater<int>())
#define printv(V) for(int i=0;i<(V).size();i++)cout<<(V)[i]<<' '
#define ll long long
#define MOD 1e9 + 7
#define pb push_back
#define pf push_front
#define pii pair<int,int>
using namespace std;
static int fastio = []() {
    #define endl '\n'
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    return 0;
}();

string yes="YES";
string no="NO";
string func(){
	ll n,m;
	cin>>n>>m;
	bool can=false;
	int A[2][2]={};
	for(int i=0;i<n;i++){
		cin>>A[0][0]>>A[0][1]>>A[1][0]>>A[1][1];
		if(A[1][0]==A[0][1]){
			can=1;

		}
	}
	if(can && m%2==0) return yes;
	else return no;

}

int main(){
	ll t;
	cin>>t;
	while(t--){
		cout<<func()<<endl;
	}
	return 0;
}
