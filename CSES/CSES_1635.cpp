#include <iostream>
using namespace std;
int calculate(int input,int sum,int array[]){
    int dp[sum+1];
    for(int i=1;i<=sum;i++){
        dp[i]=0;
    }
    for(int i=1;i<=sum;i++){
        for(int j=0;j<input;j++){
            int minus=array[j];
            int value = i-minus;
            if(value==0){
                dp[i]++;
            }
            else if(value>0){
                (dp[i]+=dp[value])%=int(1e9+7);
            }
        }
    }
    return dp[sum]%int(1e9+7);
}
int main(){
    int input,sum;
    cin >> input>>sum;
    int array[input];
    for(int i = 0; i <input; i++){
        cin>>array[i];
    }
    int ans = calculate(input,sum,array);
    cout<<ans<<endl;
}