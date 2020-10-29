#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main()
{
	ll a[3];
	
	cin >> a[0] >> a[1] >> a[2];
	ll res1 = a[0]+a[1]+a[2];
	sort(a, a+3);
	ll res2 = (a[0]+a[1])*2;
	
	if(res1 <= res2)
		cout << res1 << endl;
	else
		cout << res2 << endl;
				
	return 0;
}