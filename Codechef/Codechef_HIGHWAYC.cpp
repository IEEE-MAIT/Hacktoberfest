#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double s,y;
        cin>>s>>y;
        double v[n];
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int d[n];
        for(int i=0;i<n;i++)
        {
            cin>>d[i];
        }
        double p[n];
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
        }
        double c[n];
        for(int i=0;i<n;i++)
        {
            cin>>c[i];
        }
        double tim=0;
        double ct=y/s;
        double po=double(1)/double(1000000);
        //cout<<ct<<" ";
        for(int i=0;i<n;i++)
        {
            if(d[i]==1)
            {
                double dd=(tim*v[i]);
                if(p[i]-c[i]+dd>=po)
                {
                    tim+=ct;
                }
                else
                {
                    double cp=p[i]+v[i]*ct+tim*v[i];
                    if(cp>=-po)
                    {
                        double t=((-1*p[i])+c[i]-dd+po)/v[i];
                        tim+=(t+ct);
                    }
                    else
                    {
                        tim+=ct;
                    }
                }
               // cout<<"j";
            }
            else if(d[i]==0)
            {
             //   cout<<"i";
                double dd=(tim*v[i]);
                if(p[i]+c[i]-dd<=-po)
                {
                    tim+=ct;
                }
                else
                {
                    double cp=p[i]-(v[i]*ct+tim*v[i]);
                    if(cp<=po)
                    {
                        double t=(p[i]-dd+c[i]+po)/v[i];
                        tim+=(t+ct);
                    }
                    else
                    {
                        tim+=ct;
                    }
                }
            }
        }
        printf("%lf\n",tim);
        
    }
    
}
