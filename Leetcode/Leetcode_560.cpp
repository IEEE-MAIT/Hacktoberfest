class Solution {
public:
    int subarraySum(vector<int>& a, int k) 
    {
        int n = a.size();
        int sum = 0;
        unordered_map <int ,int >mp;
        mp[0]=1;int cnt=0;
        for(int i = 0; i < n ;i++)
        {
            sum += a[i];
           
            int comple = sum - k;
            if(mp.find(comple) != mp.end())
                cnt += mp[comple];
             mp[sum] ++;
        }
        return cnt;
    }
};
