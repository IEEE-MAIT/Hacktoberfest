#include<iostream>
using namespace std;
int main(){
    long input;
    cin>>input;
    long expected_sum=input*(input+1);
    expected_sum/=2;
    long value;
    long sum=0;
    for (int i =0; i<int(input-1);i++){
        cin>>value;
        sum+=value;
    }
    long ans = expected_sum-sum;
    cout<<ans;
}