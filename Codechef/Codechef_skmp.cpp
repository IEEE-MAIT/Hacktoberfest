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
        string s, u, v, q, p, ans1, ans2, ans3, ans4;
        bool turn1 = false, turn2 = false;
        cin >> s;
        cin >> p;
        u = s;
        q = p;
        sorti(u);
        sorti(q);
        for (int i = 0, j = 0; i < s.size(); i++)
        {
            if (u[i] == q[j])
                j++;
            else
                v += u[i];
        }
        if (v[v.size() - 1] <= p[0])
            ans1 += v + p;
        else
        {
            int i;
            for (i = 0; i < v.size(); i++)
            {
                if (v[i] > p[0])
                {
                    ans1 += p;
                    turn1 = true;
                    break;
                }
                ans1 += v[i];
            }
            if (turn1)
            {
                FOR(j, i, v.size())
                {
                    ans1 += v[j];
                }
            }
            else
            {
                ans1 += p;
            }
        }
        if (v[0] >= p[0])
            ans2 += p + v;
        else
        {
            int i;
            for (i = 0; i < v.size(); i++)
            {
                if (v[i] >= p[0])
                {
                    ans2 += p;
                    turn2 = true;
                    break;
                }
                ans2 += v[i];
            }
            if (turn2)
            {
                FOR(j, i, v.size())
                {
                    ans2 += v[j];
                }
            }
            else
            {
                ans2 += p;
            }
        }
        cout << min(ans1, ans2) << "\n";
    }
    return 0;
}