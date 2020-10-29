#include <iostream>
#include <vector>
#include <set>
#include <utility>
#include <bits/stdc++.h>

using namespace std;

int allInfected(int n, int m, set<double> time, int *array)
{
    int infected[n];
    for (int b = 0; b < n; b++)
    {
        infected[b] = 0;
    }
    infected[m] = 1;
    set<double>::iterator itr;
    for (itr = time.begin(); itr != time.end(); itr++)
    {
        vector<pair<int, int>> meets;
        for (int j = 0; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (array[j] > array[k])
                {
                    double value;
                    value = (double(k - j) / double(array[j] - array[k]));
                    if (value == *itr)
                    {
                        pair<int, int> new_pair;
                        new_pair.first = j;
                        new_pair.second = k;
                        meets.push_back(new_pair);
                        // cout << j << " meets " << k << endl;
                    }
                }
            }
        }
        for (int l = 0; l < n; l++)
        {
            if (infected[l] == 0)
            {
                continue;
            }
            else
            {
                vector<pair<int, int>>::iterator it;
                for (it = meets.begin(); it != meets.end(); it++)
                {
                    int j = it->first;
                    int k = it->second;
                    if (l == j)
                    {
                        infected[k] = 1;
                    }
                    else if (l == k)
                    {
                        infected[j] = 1;
                    }
                }
            }
        }
    }
    int ans = 0;
    for (int final = 0; final < n; final++)
    {
        if (infected[final] == 1)
        {
            ans++;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    for (int something = 0; something < t; something++)
    {
        int n;
        cin >> n;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        set<double> time;
        for (int j = 0; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (array[j] > array[k])
                {
                    double value;
                    value = (double(k - j) / double(array[j] - array[k]));
                    time.insert(value);
                }
            }
        }
        vector<int> result;
        for (int m = 0; m < n; m++)
        {
            int value = allInfected(n, m, time, array);
            result.push_back(value);
            // cout << value << " ";
        }
        cout << *min_element(result.begin(), result.end()) << " " << *max_element(result.begin(), result.end()) << endl;
    }
}
