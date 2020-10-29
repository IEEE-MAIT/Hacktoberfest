#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long int ll;
#define pb(b) push_back(b)
#define mp(a, b) make_pair(a, b)
#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define FORDual(i, a, b) for (ll i = a; i < b; i += 2)
#define FORD(i, a, b) for (ll i = a; i >= b; i--)
#define sorti(seq) sort(seq.begin(), seq.end())
#define sortd(seq) sort(seq.begin(), seq.end(), greater<int>())

int main()
{
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    long n, t, m, k, sum, ans;
    cin >> t;
    while (t--)
    {
        cin >> n;
        sum = (n * (n + 1)) / 2;
        if (sum % 2 != 0)
        {
            cout << "0\n";
            continue;
        }
        double r, req;
        k = 1 + (4 * sum);
        req = sqrt(k);
        r = (req - 1) / 2;
        if (floor(r) == r)
        {
            ans = long((r * (r - 1)) / 2 + ((n - r) * (n - r - 1)) / 2 + n - r);
            cout << ans << "\n";
            continue;
        }
        ans = long(n - r + 1);
        cout << ans << "\n";
    }
    return 0;
}
