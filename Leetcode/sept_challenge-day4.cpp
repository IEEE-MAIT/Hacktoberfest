#include<bits/stdc++.h>
#include<string.h>
#include<vector>

using namespace std;

typedef signed long long int ull;

vector<int> partitionLabels(string str) {
	int n = str.length();
	vector<int> left(26 , -1);
	vector<int> right(26 , -1);
	vector<int> res;
	
	//calculating the left and right most occurance of a character in string
	for(int i=0 ; i<n ; i++){
		if(left[str[i] - 'a'] != -1){
	 		right[str[i] - 'a'] = i;
		}
		else{
			left[str[i] - 'a'] = i;
		}
	}

	int start = 0;
	int limit = right[str[0] - 'a'];
	//initialising limit to the rightmost occurance of first character
	for(int i=1 ; i<n ; i++){
		int curr_limit = right[str[i] - 'a'];
		if(i>limit){
			res.push_back(i-start);
			limit = curr_limit;
			start = i;
		}
		else if(curr_limit > limit){
			limit = curr_limit;
		}
	}
	res.push_back(n-start);
	
	return res;

}

int main(){
	string str = "ababcbacadefegdehijhklij";
	cout<<partitionLabels(str)[0];
return 0;
}

