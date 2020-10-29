#include<iostream>
using namespace std;
void calculate (long input){
    if (input==1){}    
    else if (input%2==0){
        input/=2;
        cout<<input<<" ";
        calculate(input);
    }
    else{
        input*=3;
        input+=1;
        cout<<input<<" ";
        calculate(input);
    }
}
int main(){
    long input;
    cin>>input;
    cout<<input<<" ";
    calculate(input);
}