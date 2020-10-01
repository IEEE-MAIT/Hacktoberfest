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

    ll n, k, t, m, a, b, tmp = 0, mx = 0, sum = 1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<ll> vec(n);
        FOR(i, 0, n)
        cin >> vec[i];
        bool found = false;
        FOR(i, 0, n - 2)
        {
            if (vec[i + 1] > vec[i])
            {
                FOR(j, i + 2, n)
                {
                    if (vec[j] < vec[i + 1])
                    {
                        cout << "YES\n"
                             << i + 1 << " " << i + 2 << " " << j + 1 << "\n";
                        found = true;
                        break;
                    }
                }
            }
            if (found)
                break;
        }
        if (!found)
            cout << "NO\n";
    }
    return 0;
}