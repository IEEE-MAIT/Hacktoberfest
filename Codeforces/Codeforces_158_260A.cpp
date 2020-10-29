#include<iostream>
using namespace std;
int a,b,n,i,j;

int main(){
	// assuming that a is always > b
	cin >> a >> b >> n;
	for(i = 0;i < 10; i++){
		if((a*10+i)%b==0){
			cout << a << i;
			for(j=0;j<n-1;j++)
				cout<<0;
			return 0;
		}
	}
	cout<<-1<<endl;
}
