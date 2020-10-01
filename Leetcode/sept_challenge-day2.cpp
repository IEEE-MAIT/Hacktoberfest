#include<bits/stdc++.h>
#include<string.h>
#include<vector>

using namespace std;

typedef signed long long int ull;

bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
	vector<int> dup = nums;
    int start = 0;
    
    if(k>=nums.size()){
    	k = nums.size()-1;
	}
	int end = k+1;
    while(end <= nums.size()){
    	sort(dup.begin()+start , dup.begin()+end);
    	for(int i=start ; i<end-1 ; i++){
    		if(dup[i+1]-dup[i] <= t){
    			return true;
			}
		}
		start++;
		end++;
		dup = nums;
	}
	return false;
}

int main(){
	vector<int> nums = {1,0,1,1};
	cout<<containsNearbyAlmostDuplicate(nums , 1 , 2);

return 0;
}

