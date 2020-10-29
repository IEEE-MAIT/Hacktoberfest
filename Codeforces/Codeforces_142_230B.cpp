#include<bits/stdc++.h>
using namespace std;
long long cont;

bool primo(int x){
	if(x < 2) return false;
	for(int i = 2; i <= x/i; i++){
		if(x%i == 0) return false;
	}return true;
}
string calcule(long long n){
	long long x =  sqrt(n);
	if(x*x == n){
		if(primo(x)){
			return "YES";
		}else{
			return "NO";
		}
	}
	return "NO";

}
int main(){
	long long n;
	cin >> n;
	for(long long i = 0; i < n; i++){
		long long x;
		cin >> x;
		cout << calcule(x)<< endl;
	}
	return 0;
}
