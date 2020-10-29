//Problem Name: Two Arrays And Swaps
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
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        int sum=0,temp=0,j=0;
        while(k--)
        {
            if(a[j]<b[j])
            {
                temp=a[j];
                a[j]=b[j];
                b[j]=temp;
            }
            j++;
        }
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        cout<<sum<<endl;
        
    }
}
