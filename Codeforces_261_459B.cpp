#include<bits/stdc++.h>
using namespace std;
main()
{
	long long i,j,n,a[200040];
	for(cin>>n;j++<n;)cin>>a[j];
	sort(a,a+n+1);
	for(;a[++i]==a[i+1];);
	for(;a[--j]==a[j-1];);
	if(i>j)cout<<0<<' '<<n*(n-1)/2;
	else cout<<a[n]-a[1]<<' '<<i*(n-j+1);
}