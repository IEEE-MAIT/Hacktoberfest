#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb(b) push_back(b)
#define mp(a, b) make_pair(a, b)
#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define FORDual(i, a, b) for (ll i = a; i < b; i += 2)
#define FORD(i, a, b) for (ll i = a; i >= b; i--)
#define sorti(seq) sort(seq.begin(), seq.end())
#define sortd(seq) sort(seq.begin(), seq.end(), greater<int>())
const int MOD = 1e9 + 7;
int adjMatrix[1009][1009];
int used[59];
int available[59];

int main()
{
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    ll t, n, m, ans = 0, l, r, c, x, y, k, d, q;
    cin >> t;
    while (t--)
    {
        ans = 0;
        cin >> x >> y;
        if (y > x)
        {
            ll diff = y - x;
            ans = (diff) / 10;
            if (diff % (10) != 0)
                ans++;
        }
        else if (x > y)
        {
            ll diff = x - y;
            ans = (diff) / 10;
            if (diff % (10) != 0)
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}