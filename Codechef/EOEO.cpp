#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    std::cin >> t;
    while(t-->0)
    {
        long long int ts;
        cin>>ts;
        while(ts%2!=1)
        {
            ts=ts/2;
        }
        cout<<(ts-1)/2<<endl;
    }
	return 0;
}
