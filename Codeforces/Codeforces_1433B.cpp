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
   for(i=0;i<n;i++)
   {
       if(arr[i]==0)
         {l++;}
         else
         {
             break;
         }
   }
   for(i=n-1;i>=0;i--)
   {
       if(arr[i]==0)
       {r++;}
       else
       {
           break;
       }
   }
   int s=count(arr,arr+n,0);
     int ans=s-l-r;
     if(ans<0)
         cout<<0<<endl;
     else
        cout<<ans<<endl;}}
 
