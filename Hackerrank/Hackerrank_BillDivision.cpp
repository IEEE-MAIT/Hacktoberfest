#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    int k;
    int sum=0,diff=0;
    cin >>n;
    cin>>k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    for(int j=0;j<n;j++)
        {
        sum+=ar[j];
    }
    
    int b;
    cin >> b;
    sum=sum-ar[k];
    sum=sum/2;
    diff=b-sum;
    if(b>sum)
        {
      cout<<diff;
    }
    else
        {
        cout<<"Bon Appetit";
    }
    
    return 0;
}
