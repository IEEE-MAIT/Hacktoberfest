#include <iostream>
using namespace std;
 
int calculate(int sum,int array[],int input){ 
    int dp[sum+1];
    for(int i=1;i<=sum;i++){
        dp[i]=-1;
    }
    for(int i=1;i<=sum;i++){
        for(int j=0;j<input;j++){
            int minus = array[j];
            int value = i-minus;
            if(value==0){
                dp[i]=1;
            }
            else if(value>0){
                int something = 1+dp[value];
                if(something==0){
 
                }
                else if(something<dp[i]||dp[i]==-1){
                    dp[i]=something;
                }
            }
        }
    }
    return dp[sum];
}
 
int main(){
    int input,sum;
    cin>>input>>sum;
    int array[input];
    for(int i=0;i<input;i++){
        cin>>array[i];
    }
    int ans = calculate(sum,array,input);
    cout<<ans;
    
}