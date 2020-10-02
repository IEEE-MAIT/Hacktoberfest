/* Codeforces #661 (Div 3) Problem: 1399B */

// We need to find out the minimum element in both a and b arrays
// The minimum number of moves required to equalize the candies is the summation of max(ai-min(a),bi-min(b)).

#include <iostream>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <iterator>
#include <cmath>
#define ll long long
#define pb push_back
#define endl "\n"
using namespace std;

int main()
{
    ll t = 0;
    cin >> t;
    while(t--)
    {
        ll n = 0, i = 0, x = 0, ma = 0, mb = 0, ans = 0;
        cin >> n;
        vector<ll> a, b;
        for(i = 0; i < n; i++)
        {
            cin >> x;
            a.pb(x);
        }
        for(i = 0; i < n; i++)
        {
            cin >> x;
            b.pb(x);
        }
        ma = *min_element(a.begin(), a.end());
        mb = *min_element(b.begin(), b.end());
        for(i = 0; i < n; i++)
        {
            ans += max(a[i] - ma, b[i] - mb);
        }
        cout << ans << endl;
    }
    return 0;
}
