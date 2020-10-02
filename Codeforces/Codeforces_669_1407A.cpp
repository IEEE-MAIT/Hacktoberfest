/* Codeforces #669 (Div 2) Problem: 1407A */

// As the array consists only 0s and 1s and we need to remove atmost n/2 elements, print the resulting array
// We will count the number of zeroes, then number of will be n - number of zeroes or vice versa
// If number of zeroes is greater than n/2 the surely the condition is satisfied and we need to print an array containing 0s.
// Else we need to print the array that contains only 1s but its length must be even so that alternating sum is always zero.

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
#include <iterator>
#define endl "\n"
#define pb push_back
#define ll long long
using namespace std;

int main()
{
    ll t = 0;
    cin >> t;
    while(t--)
    {
        ll n = 0, i = 0, x = 0, one = 0, zero = 0;
        cin >> n;
        vector<int> a;
        for(i = 0; i < n; i++)
        {
            cin >> x;
            a.pb(x);
            if(x == 0)
                zero++;
            else
                one++;
        }
        if(zero >= n / 2)
        {
            cout << zero << endl;
            for(i = 0; i < zero; i++)
                cout << 0 << " ";
            cout << endl;
        }
        else
        {
            cout << one - one % 2 << endl;
            for(i = 0; i < one - one % 2; i++)
                cout << 1 << " ";
            cout << endl;
        }
    }
    return 0;
}
