class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int n = s.length();
        map<char,int>mp;
        vector<int>v;
        int cnt = 0;int i = 0 , j = 0;
        while(i < n && j <  n)
        {
            if( mp.find(s[j]) == mp.end() )
            {
                mp[s[j]] = j ;
                j++;
                cnt = max(cnt, j- i);
            }
            else
            {
                mp.erase(s[i]);
                i++;
                
            }
            
        }
        return cnt;
    }
    
};
