#include<bits/stdc++.h>
using namespace std;
#define int     long long
#define pb      push_back
 
 
main()
{int t;cin>>t;
 while(t--)
  {int n;
   cin>>n;
   int arr[n];
   int i;int l=0,r=0;
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
  int mx=*max_element(arr,arr+n);
 
    for(i=0;i<n-1;i++)
    {
        if(arr[i]==mx&&arr[i+1]<mx)
        {
            cout<<i+1<<endl;
            break;
 
        }
            if(arr[i+1]==mx&&arr[i]<mx)
            {
                cout<<i+2<<endl;
                break;
            }
        }
 
    if(i==n-1)
    {
        cout<<-1<<endl;
    } }}
