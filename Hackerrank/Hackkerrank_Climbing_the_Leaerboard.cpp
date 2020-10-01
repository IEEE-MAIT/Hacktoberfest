#include "bits/stdc++.h"
using namespace std;
#define rep(i, n) for (int(i) = 0; (i) < (int)(n); ++(i))
#define rer(i, l, u) for (int(i) = (int)(l); (i) <= (int)(u); ++(i))
#define reu(i, l, u) for (int(i) = (int)(l); (i) < (int)(u); ++(i))
static const int INF = 0x3f3f3f3f;
static const long long INFL = 0x3f3f3f3f3f3f3f3fLL;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pair<int, int>> vpii;
typedef long long ll;
template <typename T, typename U>
static void amin(T &x, U y)
{
    if (y < x)
        x = y;
}
template <typename T, typename U>
static void amax(T &x, U y)
{
    if (x < y)
        x = y;
}

int main()
{
    int n;
    while (~scanf("%d", &n))
    {
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            scanf("%d", &a[i]);
        a.erase(unique(a.begin(), a.end()), a.end());

        int m;
        scanf("%d", &m);
        rep(i, m)
        {
            int x;
            scanf("%d", &x);
            int ans = (int)(lower_bound(a.begin(), a.end(), x, greater<int>()) - a.begin());
            printf("%d\n", ans + 1);
        }
    }
    return 0;
}
