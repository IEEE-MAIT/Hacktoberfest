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

ll sumDigits(ll n)
{
    ll sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    ll t, n, m, s, ans = 0, l, r, c, x, y, k, d, q, a, b;
    cin >> t;
    while (t--)
    {
        ans = 0;
        cin >> n >> s;
        ll curr = sumDigits(n);
        if (curr <= s)
        {
            cout << ans << "\n";
            continue;
        }
        ll sum = 0;
        ll test = n, tries = 0;
        while (curr - sum >= s)
        {
            sum += test % 10;
            ++tries;
            test /= 10;
        }
        ++test;
        ll mulp = pow(10, tries);
        test *= mulp;
        cout << test - n << "\n";
    }
    return 0;
}