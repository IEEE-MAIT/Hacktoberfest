#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0){
	    int h,p;
	    cin>>h>>p;
	    while(h>0 or p>0){
	        h=h-p;
	        if(h<=0){
	            cout<<1<<endl;
	            break;
	        }
	        p=p/2;
	        
	        if(p<=0)
	        {
	            cout<<0<<endl;
	            break;
	        }
	    }
	}
	
	return 0;
}