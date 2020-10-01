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
        cin >> n >> x >> y;
        ll diff = y - x;
        if (y - x + 1 <= n)
        {
            FORD(i, y, x)
            {
                cout << i << " ";
                --n;
            }
            ll temp = x - 1;
            while (n > 0 && temp > 0)
            {
                cout << temp << " ";
                --n;
                --temp;
            }
            temp = y + 1;
            while (n > 0)
            {
                cout << temp << " ";
                --n;
                ++temp;
            }
        }
        else if (n == 2)
        {
            cout << x << " " << y;
        }
        else
        {
            ll diff = 2;
            while ((y - x) % diff != 0 || ((y - x) / diff >= n))
                diff++;
            for (int i = y; i >= x && n > 0; i -= diff)
            {
                cout << i << " ";
                --n;
            }
            ll temp = x - diff;
            while (temp > 0 && n > 0)
            {
                cout << temp << " ";
                --n;
                temp -= diff;
            }
            temp = y + diff;
            while (n > 0)
            {
                cout << temp << " ";
                --n;
                temp += diff;
            }
        }
        cout << "\n";
    }
    return 0;
}