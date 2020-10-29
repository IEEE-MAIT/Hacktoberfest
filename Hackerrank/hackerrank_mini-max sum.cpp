#include<iostream>
using namespace std;
int main()
{
     long int arr[5];
    long long int sum=0,min,max;
   for(int i=0; i<5; i++){
          cin>>arr[i];
       sum= sum+arr[i];
   }
   min=arr[0];
   max= arr[0];
   for(int i=0; i<5; i++)
   {
   if(min>arr[i])
      min=arr[i];
   else if(max<arr[i]) 
       max=arr[i];
   
   }
       cout<<sum-max<<" "<<sum-min<<endl;
return 0;
}
