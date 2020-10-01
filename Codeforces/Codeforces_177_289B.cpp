#include<bits/stdc++.h>
using namespace std;
int ans;
int n, m, d, a[10012];
int main(){
	cin >> n >> m >> d;
	n = n*m;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int media = n/2;
	for(int i = 0; i < n; i++){
		if(abs(a[i] - a[media]) % d != 0){
			cout << -1 << endl;
			return 0;
		}else{
			ans+= (abs(a[i]-a[media])/d);
		}
	}
	cout << ans << endl;
	return 0;
}
