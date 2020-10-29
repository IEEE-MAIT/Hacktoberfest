#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb(b) push_back(b)
#define mp(a, b) make_pair(a, b)
#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define FORD(i, a, b) for (ll i = a; i >= b; i--)
#define FORDual(i, a, b) for (ll i = a; i < b; i += 2)
#define sorti(seq) sort(seq.begin(), seq.end())
#define sortd(seq) sort(seq.begin(), seq.end(), greater<int>())

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    ll n, t, m, k, l, r, mn, mx, c, q, x = 0, a, b;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        vector<ll> skill(n);
        FOR(i, 0, n)
        cin >> skill[i];
        sortd(skill);
        ll sum = 0, no = 0, ans = 0;
        FOR(i, 0, n)
        {
            sum = skill[i];
            no++;
            if ((sum * no) >= x)
            {
                ans++;
                no = 0;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}