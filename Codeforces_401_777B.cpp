#include<bits/stdc++.h>
using namespace std;
int main(){
int n,j;
string s,m;
cin>>n;
cin>>s>>m;
sort(s.begin(),s.end());
sort(m.begin(),m.end());
j=n-1;
for(int i=n-1;i>=0;i--){
    if(s[i]<=m[j])j--;
}
cout<<j+1<<"\n";
j=0;
for(int i=0;i<n;i++){
    if(m[i]>s[j])j++;
}
cout<<j;
return 0;
}