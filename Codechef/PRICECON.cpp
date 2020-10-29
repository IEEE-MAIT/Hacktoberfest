#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n,k,sum=0,num,i;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>num;
            if(num>k)
            {
                 sum+=(num-k);
            }

        }
        cout<<sum<<endl;
    }
}