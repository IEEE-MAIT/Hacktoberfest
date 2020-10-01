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
        vector<ll> pos(n), moves(n);
        FOR(i, 0, n)
        {
            cin >> pos[i];
            if ((k - pos[i]) % pos[i] == 0)
                moves[i] = (k - pos[i]) / pos[i];
            else
                moves[i] = N;
        }
        auto it = min_element(moves.begin(), moves.end()) - moves.begin();
        if (moves[it] == N)
            cout << "-1\n";
        else
            cout << pos[it] << "\n";
    }
    return 0;
}