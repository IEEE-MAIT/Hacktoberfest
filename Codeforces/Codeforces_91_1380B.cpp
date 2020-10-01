#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb(b) push_back(b)
#define mp(a, b) make_pair(a, b)
#define FOR(i, a, b) for (int i = a; i < b; i++)
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

    ll n, t, m, k, l, r, mn, mx, c, q, x = 0, a, b, y, z;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        n = s.length();
        ll r = 0, sc = 0, p = 0;
        FOR(i, 0, n)
        {
            if (s[i] == 'R')
                p++;
            else if (s[i] == 'S')
                r++;
            else
                sc++;
        }
        string str;
        if (r > p)
        {
            if (r > sc)
                str.insert(0, n, 'R');
            else
                str.insert(0, n, 'S');
        }
        else
        {
            if (p > sc)
                str.insert(0, n, 'P');
            else
                str.insert(0, n, 'S');
        }
        cout << str << "\n";
    }
    return 0;
}