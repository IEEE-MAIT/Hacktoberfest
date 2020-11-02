#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int j = 0; j < n; ++j)
	{
		string s;
		cin>>s;
		long long int res=0,cur=0;
		int flag=1;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='-')
			{
				cur-=1;
				if(cur<0) {res+=i+1; cur+=1;}
			}
			else 
			 cur+=1;
		}
		if(cur>=0) res+=s.size();
		cout<<res<<endl;
	}
	return 0;
}