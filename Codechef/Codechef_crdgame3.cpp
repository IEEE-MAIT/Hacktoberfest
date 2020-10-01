#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb(b) push_back(b)
#define mp(a, b) make_pair(a, b)
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define FORDual(i, a, b) for (ll i = a; i < b; i += 2)
#define FORD(i, a, b) for (ll i = a; i >= b; i--)
#define sorti(seq) sort(seq.begin(), seq.end())
#define sortd(seq) sort(seq.begin(), seq.end(), greater<int>())
const ll N = 10000000007;

int main()
{
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    ll n, t, m, k, a, b, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        ll chef = 0, rick = 0;
        chef = n / 9;
        rick = k / 9;
        if (n % 9 != 0)
            chef++;
        if (k % 9 != 0)
            rick++;
        if (rick <= chef)
            cout << "1 " << rick << "\n";
        else
            cout << "0 " << chef << "\n";
    }
    return 0;
}