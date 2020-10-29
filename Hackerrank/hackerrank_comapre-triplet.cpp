#include <bits/stdc++.h>

using namespace std;
int main()
{
    
int a0, a1, a2;
cin>>a0>>a1>>a2;
int b0, b1, b2;
cin>>b0>>b1>>b2;
int a=0, b=0;
if(a0>b0)
 {
     a++;
 } else if (a0<b0){
 b++;}
   if(a1>b1)
   {
a++;
   }
   else if(a1<b1){
b++;}
if(a2>b2){ 
a++;}
else if(a2<b2){
    b++;
}
cout<<a<<" "<<b;
return 0;
}
