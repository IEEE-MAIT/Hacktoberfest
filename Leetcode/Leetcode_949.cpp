#include<bits/stdc++.h>
#include<string.h>
#include<vector>

using namespace std;

typedef signed long long int ull;

//function for checking whether this permutation will provide valid time
bool isValid(vector<int> a){
        if(a[1]>2){
            return false;
        }
        if(a[1] == 2){
            if(a[0] >3 ){
                return false;
            }
        }
        if(a[3] > 5)
            return false;
        return true;
    }
    
//function for calculating time if it is valid
int getValue(vector<int> a){
    if(isValid(a)){
        int max_time = 60*(a[0] + a[1]*10) + (a[2] + a[3]*10);
        return max_time;
    }
    else
        return -1;
}
    
    
string largestTimeFromDigits(vector<int>& arr) {
	vector<int> dup;
	int n=4;
    sort(arr.begin() , arr.end());
    dup = arr;
    int curr_value = -1 , curr_value2 = -1;
    int max_val = -1;
    
    //loop for permutations of array
    do {
       curr_value = getValue(arr);
       max_val = max(curr_value , max_val);
    } while(std::next_permutation(arr.begin(), arr.end()));
    
    
    if(max_val == -1){
        return "";
    }
    else{
    	//to get the time string from the value
    	int hours = max_val/60;
    	int min = max_val%60;
    	std::string h = std::to_string(hours);
    	std::string m = std::to_string(min);
    	string res = h + ":" + m;
    	return res;
	}
}

int main(){
	vector<int> arr = {4,0,1,2};
	cout<<largestTimeFromDigits(arr);

return 0;
}

