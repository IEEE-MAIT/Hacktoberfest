/*

Given a string s, find the longest palindromic subsequence's length in s. You may assume that the maximum length of s is 1000.

Example 1:
Input:

"bbbab"
Output:
4
One possible longest palindromic subsequence is "bbbb".

Example 2:
Input:

"cbbd"
Output:
2
One possible longest palindromic subsequence is "bb".

Constraints:

1 <= s.length <= 1000
s consists only of lowercase English letters.

*/

class Solution {
public:
    int longestPalindromeSubseq(string s) {
        vector<vector<int>> dp(s.length(),vector<int> (s.length(),0));
        for(int i=0;i<s.length();i++){
            dp[i][i]=1;
        }
        for(int col=1;col<s.length();col++){
            for(int row=col-1;row>=0;row--){
                if(s[row]==s[col])dp[row][col]=dp[row+1][col-1]+2;
                else{
                    dp[row][col]=max(dp[row+1][col],dp[row][col-1]);
                }
            }
        }
        return dp[0][s.length()-1];
    }
};