/*

Combinations(Medium)

Given two integers n and k, return all possible combinations of k numbers out of 1 ... n.

You may return the answer in any order.

 

Example 1:

Input: n = 4, k = 2
Output:
[
  [2,4],
  [3,4],
  [2,3],
  [1,2],
  [1,3],
  [1,4],
]
Example 2:

Input: n = 1, k = 1
Output: [[1]]
 

Constraints:

1 <= n <= 20
1 <= k <= n

*/

class Solution {
public:
    
    void combination(int n, int k, int start, int &limit, vector<int>temp,vector<vector<int>>&result)
    {
        if(k==0)
        {
            result.push_back(temp);
            return;
        }
        
        if(n==0)
            return;
        
        for(int i=start;i<=limit-k+1;i++)
        {
            temp.push_back(i);
            
            combination(n-1,k-1,i+1,limit,temp,result);
            
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
           
        vector<vector<int>>result;
        vector<int>temp;
        
        combination(n,k,1,n,temp,result);   
        
        return result;
            
    }
};