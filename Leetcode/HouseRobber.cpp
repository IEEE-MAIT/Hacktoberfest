//Problem Link: https://leetcode.com/problems/house-robber/



class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size()-1;
        if(n==0)
        {
            return nums[0];
        }
        int arr[n+10];
        arr[0]=nums[0];
        arr[1]=max(nums[0],nums[1]);
        for(int i=2;i<=n;i++)
        {
            arr[i]=max(nums[i]+arr[i-2],arr[i-1]);
        }
        return arr[n];
    }
};
