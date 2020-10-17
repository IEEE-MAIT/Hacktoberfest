#include <bits/stdc++.h>
using namespace std;
#define lli long long int
bool ly(lli n)
{
    if((n%4==0)&&(n%100!=0))
    {
        return true;
    }
    else
    {
        if(n%100==0&&n%400==0)
        {
            return true;
        }
    }
    return false;
}
lli olcount(lli y1,lli y2,lli look[])
{	lli res=0,i;
    for(i=y1;i<=y2;i++)
    {
       lli x;
       x=i%400; 
       if(x==0)
       {
           x=400;
       }
       if(ly(x))
       {
           if(look[x]==3)
           {
               res++;
           }
       }
       else
       {
           if(look[x]==3||look[x]==4)
           {
               res++;
           }
       }
        
    }
    return res;
}
int main()
{
lli look[401]={0},i,count=0;
look[1]=1;
for(i=1;i<400;i++)
    {
        if(ly(i))
        {
            look[i+1]=look[i]+2;
            if(look[i]==3)
            {
                count++;
            }
        }
        else
        {
            look[i+1]=(look[i]+1);
            if(look[i]==3||look[i]==4)
            {
                count++;
            }
        }
        if(look[i+1]==8)
        {
            look[i+1]=1;
        }
        if(look[i+1]==9)
        {
            look[i+1]=2;
        }
    }
lli test;
cin>>test;
while(test--)
{
    lli m1,y1,m2,y2;
    cin>>m1>>y1;
    cin>>m2>>y2;
    if(m1>2)
    {
        y1=y1+1;
    }
    if (m2<2)
    {
        y2=y2-1;
    }
    lli ans=0;
    if(y2-y1<=400)
    {
        ans=olcount(y1,y2,look);
    	cout<<ans<<"\n";
    }
    else
    {	lli ll,ul;
    	ll=y1+(400-(y1%400));
    	ul=y2-(y2%400);
    	ans=ans+olcount(y1,ll-1,look);
    	ans=ans+olcount(ul+1,y2,look);
    	ans=ans+(count*((ul-ll)/400));
    	cout<<ans<<"\n";
    }
}
return 0;
}