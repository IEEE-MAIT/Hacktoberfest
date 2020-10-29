#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int temp,skipped=0,i,n;
		cin>>n;
		long int s[n];
		for(i=0;i<n;i++)
			cin>>s[i];
		for(i=0;i<n-1;i++)
		{
			temp=(s[i]-s[i+1]);
			if(temp < 0)
			{
				skipped+=temp*(-1) - 1;
				
			}
			else
			{
				skipped+=temp - 1;
			}
		}
		cout<<skipped<<"\n";
	}
	return 0;
}
