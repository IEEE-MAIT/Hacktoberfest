#include<iostream>
using namespace std;
int main(){


 int q;

    cin >> q;
    for(int i = 0; i < q; i++){
        int a,b,c;
        cin >> a >> b >> c;
        abs(a-c) < abs(b-c) ? cout << "Cat A" : abs(b-c) < abs(a-c) ? cout << "Cat B" : cout << "Mouse C";
        cout << endl;
    }
    return 0;
}
