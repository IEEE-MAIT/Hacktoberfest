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

    int t, n, m, s, ans = 0, l, r, c, k, d, q, a, b;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<vector<int>> arr;
        arr.resize(n);
        FOR(i, 0, n)
        {
            FOR(j, 0, n)
            {
                cin >> a;
                arr[i].pb(a);
            }
        }
        ans = 0, k = 1;
        FOR(i, 1, n)
        {
            b = i + 1;
            if (arr[0][i] != b)
            {
                ++ans;
                while (i < n && arr[0][i] != b)
                {
                    ++i;
                    ++b;
                }
            }
        }
        if (ans == 0)
            cout << ans << "\n";
        else
        {
            ans *= 2;
            if (arr[0][1] == 2)
                cout << ans << "\n";
            else
                cout << ans - 1 << "\n";
        }
    }
    return 0;
}
