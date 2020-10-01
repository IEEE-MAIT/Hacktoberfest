#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    string s;cin>>s;
    char c=s[0];
    int cnt=1;
    int maxz=1;
    for(int i=1;i<s.length();i++){
        if(c==s[i]) cnt++;
        else {
            c=s[i];
            cnt=1;
        }
        maxz=max(maxz,cnt);
    }
    cout<<maxz<<"\n";
    return 0;
 
}
