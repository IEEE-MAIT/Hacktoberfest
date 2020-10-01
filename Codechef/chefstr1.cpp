#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        long int arr[n];
        for(long int i=0;i<n;i++){
            cin>>arr[i];
        }
        long int res=0;
        for(long int i=0;i<n-1;i++){
            res=res+(abs(arr[i]-arr[i+1])-1);
        }
        cout<<res<<endl;
    }
	// your code goes here
	return 0;
}
