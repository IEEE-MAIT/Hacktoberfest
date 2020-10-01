#include<iostream>
#include<string>
using namespace std;
int main(){
    string input;
    cin>>input;
    int max_ans=1;
    int ans=1;
    for(int i=0;i<(int(input.length())-1);i++){
        if(input[i]==input[i+1]){
            ans++;
        }
        else{
            if(max_ans<ans)max_ans=ans;
            ans=1;
        }
    }
    if(max_ans<ans)max_ans=ans;
    cout<<max_ans;
}