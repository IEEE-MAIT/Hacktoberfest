#include <iostream>
#include<vector>
using namespace std;

int main() {
	long t;
	cin>>t;
	for(long i=0;i<t;i++)
	{
	    string str;
	    cin>>str;
	    long n=str.size();
	    vector<long> vec[26];
	    for(long j=0;j<n;j++)
	    {
	        vec[int(str[j])-97].push_back(j+1);
	    }
	    long a[n];
	    long odd;
	    int flag=0;
	    long l=0;
	    for(long int k=0;k<26;k++)
	    {
	        long si=vec[k].size();
	        if(vec[k].size()>0&&vec[k].size()%2==1)
	        {
	            if(flag==0&&n%2==1)
	            {
	            odd=vec[k][si/2];
	            a[n/2]=odd;
	            flag=1;
	            }
	            else
	            {
	                flag=2;
	                break;
	            }
	        }
	        long j=l;
	        if(vec[k].size()>0)
	        {
	            //cout<<l<<" ";
	        for(j=l;j<((si/2)+l);j++)
	        {
	            a[j]=vec[k][j-l];
	            a[n-j-1]=vec[k][si-(j-l)-1];
	        }
	        }
	        l=j;
	    }
	    if(flag!=2)
	    {
	    for(long int j=0;j<n;j++)
	    {
	        cout<<a[j]<<" ";
	    }
	    }
	    else
	    {
	        cout<<-1;
	    }
	    cout<<endl;
	}
	return 0;
}
