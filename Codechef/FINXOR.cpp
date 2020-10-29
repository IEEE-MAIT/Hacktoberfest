#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int something = 0; something < t; something++)
    {
        int n;
        cin >> n;
        int ans;
        int last;
        for (int i = 1; i <= 20; i++)
        {
            int multiplier = int(pow(2, i));
            cout << 1 << " " << multiplier - 1 << endl;
            fflush(stdout);
            int value;
            cin >> value;
            if (multiplier == 2)
            {
                if (value % 2 == 0)
                {
                    ans = n % 2;
                }
                else
                {
                    ans = ((n % 2) + 1) % 2;
                }
                last = value;
                continue;
            }
            if (value == -1)
            {
                return 0;
            }
            int diff = value - last;
            diff /= (multiplier / 2);
            int x = (n - diff) / 2;
            if (x % 2 == 1)
            {
                ans += (multiplier / 2);
            }
            last = value;
        }
        cout << 2 << " " << ans << endl;
        fflush(stdout);
        int verify;
        cin >> verify;
        if (verify != 1)
        {
            break;
        }
    }
}