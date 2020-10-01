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
        set<int, greater<int>> st;
        set<int>::iterator it1;
        cin >> n;
        FOR(i, 0, n)
        {
            cin >> a;
            if (a > 0)
                st.insert(a);
        }
        cout << st.size() << "\n";
    }
    return 0;
}
