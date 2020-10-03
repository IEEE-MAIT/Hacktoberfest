//Problem Name: Board Moves
//CodeForces #642 Div(3)
//UserName: ALOKTRIPATHI

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        uint64_t ans=0,sum=0,x=8,i=1;
        uint64_t ns=pow(n,2)-1;
        while(sum!=ns)
        {
            sum=sum+x*i;
            ans=ans+(x*i)*i;
                i++;
        }
        cout<<ans<<endl;
        
    }
}
