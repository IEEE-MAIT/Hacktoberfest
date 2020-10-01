#include<bits/stdc++.h>
using namespace std;
long long  n;
string s;
int main()
{
   cin>>n;
   while(1)
   {
       s+="47";
       sort(s.begin(),s.end());
       do{
        if(stoll(s)>=n)
        {
            cout<<s<<endl;
            return 0;
        }
       }while(next_permutation(s.begin(),s.end()));
   }
}