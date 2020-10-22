#include<iostream>
using namespace std;

int main(){
    int c, n, max = 0;
    cin.ignore();
    while(cin >> n)
        max < n ? c = !!(max = n) : c += max == n;
    cout << c;
    return 0;
}
