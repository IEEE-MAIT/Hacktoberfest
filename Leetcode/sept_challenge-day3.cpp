#include<bits/stdc++.h>
#include<string.h>
#include<vector>

using namespace std;

typedef signed long long int ull;


//calculating divisors of length of string
vector<int> countDivisors(int n) 
{ 
	vector<int> v;
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            if (n / i == i || i==1) {
    			v.push_back(i);
    		}
  
            else{
                v.push_back(n/i);
            	v.push_back(i);
            }
        } 
    } 
    return v; 
} 

string getString(string str , int start , int end){
	string s = "";
	for(int i=start ; i<end ; i++){
		s += str[i];
	}
	return s;
}

bool repeatedSubstringPattern(string str) {      
		int len = str.length();
		vector<int> divs;
		divs = countDivisors(len);

		for(int k=0 ; k<divs.size() ; k++){
			int flag = 0;
			int start = 0;
		    int end = divs[k];
		    string prev_str = "";
		    string curr_str = getString(str , start, end);
		    
		    //breaking the string at each the div[k] level and keeping the track of previous sustring
		    //if for a div[k] all the substring are equal return true
			for(int i=1 ; i<(len/divs[k]) ; i++){
				start += divs[k];
				end += divs[k];
				prev_str = curr_str;
				curr_str = getString(str , start, end);
				if(curr_str != prev_str){
					flag = 0;
					break;
				}else{
					flag = 1;
				}
					
			}
			if(flag == 1){
				return true;
			}
		
		}
	return false;
		
}

int main(){
	
string str = "aba";
cout<<repeatedSubstringPattern(str);

return 0;
}

