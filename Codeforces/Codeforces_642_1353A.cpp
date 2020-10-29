//Problem Name: Most Unstable Array
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
    long int t;
    cin>>t;
    while(t--)
    {
        long long int n,m;
        cin>>n>>m;
        if(n==1) {cout<<"0"<<endl;}
        else if(n==2){cout<<m<<endl;}
        else cout<<m*2<<endl;
        
    }
    return 0;
}
