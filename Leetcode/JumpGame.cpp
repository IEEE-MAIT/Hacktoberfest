//problem Link: https://leetcode.com/problems/jump-game/



class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxNow=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i<=maxNow)
                maxNow=max(maxNow,i+nums[i]);
            else
                break;
        }
        if(maxNow>=nums.size()-1) return true;
            
        return false;
    }
};