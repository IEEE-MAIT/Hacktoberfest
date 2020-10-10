#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long n;
	    cin>>n;
	    long a[n];
	    long b[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(i>0)
	        b[i]=a[i]+b[i-1];
	        else
	        b[i]=a[i];
	    }
	    long c[n]={0};
	    for(int i=0;i<n;i++)
	    {
	        int j=i+1;
	        while(j<n)
	        {
	            if(i==j+1||i==j-1)
	            {
	                c[j]++;
	            }
	            else
	            {
	                if(a[i]>=(b[j-1]-b[i]))
	                {
	                    c[j]++;
	                }
	                else
	                break;
	            }
	            j++;
	        }
	        j=i-1;
	        while(j>=0)
	        {
	            if(i==j+1||i==j-1)
	            {
	                c[j]++;
	            } 
	            else if(i>j)
	            {
	                if(a[i]>=(b[i-1]-b[j]))
	                {
	                    c[j]++;
	                }
	                else
	                break;
	            }
	            j--;
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<c[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
