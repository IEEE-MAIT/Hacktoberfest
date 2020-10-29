/* Codeforces #672 (Div 2) Problem: 1420A */

// An array can be sorted using no more than n(n+1)/2 operations.
// Its sorting will take exactly n(n+1)/2 operations when the given array is sorted in descending order
// So we just need to check it for the worst case that will be taking n(n+1)/2 operations to sort the array.

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
	ll t = 0;
	cin >> t;
	while(t--)
	{
		ll n = 0, i = 0;
		cin >> n;
		ll a[n];
		for(i = 0; i < n; i++)
		cin >> a[i];
		bool flag = false;
		for(i = 1; i < n; i++)
		{
			if(a[i] >= a[i - 1])
			{
				flag = true;
				break;
			}
		}
		if (flag)
		cout << "YES" << endl;
		else
		cout << "NO" << endl;
	}
	return 0;
}
