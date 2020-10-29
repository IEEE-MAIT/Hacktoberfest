#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main()
{
	ll n,a,b,c;
	int t;
	cin >> t;
	
	while(t--) {
		cin >> a >> b >> c >> n;
		ll res = a + b + c + n;
		ll maximum = max(a, max(b,c));
		if(res%3 == 0 && res/3>=maximum)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	
	return 0;
}