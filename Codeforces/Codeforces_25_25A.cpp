#include<bits/std++.h>
#define ll long long int
int main()
{
 ll n;
 cin>>n;
 ll num;
 ll e=0,o=0,eve,odd;
 for(int i=0;i<n;i++)
   {
     cin>>num;
     if(num%2==0)
     {e++;eve=i+1;}
     else
     {o++;odd=i+1;}
     
   }
    if(o>1)
      cout<<eve;
    if(e>1)
      cout<<odd;
  return 0;
}
