class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map < string , int > mp;
        vector<string>ans;
         map <int, vector< string >  > p;
        // vector<string> p;
        int n =  words.size();
        for(int i = 0; i < n ;i++)
        {
            mp[words[i]]++;
        }
        for(auto i :mp)
        {
            p[i.second].push_back(i.first);
        }
        int r = 0;
        for (auto it = p.rbegin(); it != p.rend(); it++)
        { 
            sort(p[it->first].begin(),p[it->first].end());
            for(int i= 0;i<p[it->first].size();++i)
            {
                ans.push_back(p[it->first][i]);
                r++;
                if(r==k)
                    return ans;
            }
        }
            
        return ans;
    }
};

        
        
