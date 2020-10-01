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

    ll t, n, m, ans = 0, l, r, c, x, y, k, d, q, a, b;
    cin >> t;
    while (t--)
    {
        ans = 0;
        cin >> a >> b >> x >> y >> n;
        ll diff1 = a - x;
        ll diff2 = b - y;
        if (diff1 + diff2 <= n)
        {
            cout << x * y << "\n";
        }
        else
        {
            ll tmp1 = n, tmp2 = n;
            ll anew = max(a - tmp1, x);
            tmp1 -= (a - anew);
            ll bs = max(b - tmp1, y);
            ll p1 = anew * bs;
            ll bnew = max(b - tmp2, y);
            tmp2 -= (b - bnew);
            ll as = max(a - tmp2, x);
            ll p2 = bnew * as;
            cout << min(p1, p2) << "\n";
        }
    }
    return 0;
}