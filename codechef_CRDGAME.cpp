#include <iostream>
using namespace std;
int sumA,sumB;

int main() {
    int t;
    cin>> t;
    for(int i=0; i<t; i++)
    {
        int n;
        int pA=0,pB=0;
        cin>> n;
        for(int j=0; j<n; j++){
            int A,B;
            sumA=0; sumB=0;
            cin>>A>>B;
            while(A>0){
                sumA += (A%10);
                
                A = A/10;
                
            }
            while(B>0){
                sumB += (B%10);
                
                B = B/10;
                
            }
            if(sumA>sumB){
                pA += 1;
            }
            else if(sumB==sumA){
                pA += 1;
                pB += 1;
            }
            else{
            
                pB +=1;
            }
        }
        
        if(pB>pA){
            cout<<1<<" "<<pB<<endl;
        }
        else if(pA>pB){
            cout<<0<<" "<<pA<<endl;
        }
        else if(pB==pA){
            cout<<2<<" "<<pB<<endl;
        }
    }

	return 0;
}
