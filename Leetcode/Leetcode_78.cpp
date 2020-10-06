/*
Subsets(Medium)

- Given a set of distinct integers, nums, return all possible subsets (the power set).

Note: The solution set must not contain duplicate subsets.

Example:

Input: nums = [1,2,3]
Output:
[
  [3],
  [1],
  [2],
  [1,2,3],
  [1,3],
  [2,3],
  [1,2],
  []
]

*/

class Solution {
public:
    vector<vector<int>> ans;
	void dfs(vector<int>& nums, vector<int>& path,int idx)
	{
		if(idx>=nums.size())
		{
			ans.push_back(path);
			return;
		}
		path.push_back(nums[idx]);
		dfs(nums,path,idx+1);
		path.pop_back();
		dfs(nums,path,idx+1);
	}
	vector<vector<int>> subsets(vector<int>& nums) {
		vector<int> path;
		dfs(nums,path,0);
		return ans;
	}
};