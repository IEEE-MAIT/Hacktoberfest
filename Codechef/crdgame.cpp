#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n][2];
        for(int i=0;i<n;i++){
            cin>>arr[i][0]>>arr[i][1];
        }
        int chef=0,morty=0;
        for(int i=0;i<n;i++){
            int sum1=0,sum2=0;
            while(arr[i][0]){
                int rem=arr[i][0]%10;
               sum1=sum1+rem;
                arr[i][0]=arr[i][0]/10;
            }
            while(arr[i][1]){
                int rem=arr[i][1]%10;
                sum2=sum2+rem;
                arr[i][1]=arr[i][1]/10;
            }
            if(sum1>sum2)
            chef++;
            else if(sum2>sum1)
            morty++;
            else{
                chef++;
                morty++;
            }
            
            
            
        }
        if(chef>morty)
        cout<<"0 "<<chef<<endl;
        else if(morty>chef)
        cout<<"1 "<<morty<<endl;
        else
        cout<<"2 "<<chef<<endl;
    }
	// your code goes here
	return 0;
}
