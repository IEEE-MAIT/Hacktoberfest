/*

Longest Palindromic Substring (medium)

- Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.

Example 1:
Input: "babad"
Output: "bab"
Note: "aba" is also a valid answer.

Example 2:
Input: "cbbd"
Output: "bb"

*/

class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";
        int maxLength = 1, start = 0; 
        if(s == "")
            return s;
        else{
            bool table[s.length()][s.length()]; 
            memset(table, 0, sizeof(table));
  
            for (int i = 0; i < s.length(); ++i) 
                table[i][i] = true; 
            int start = 0; 
            for (int i = 0; i < s.length() - 1; ++i) { 
                if (s[i] == s[i + 1]) { 
                    table[i][i + 1] = true; 
                    start = i; 
                    maxLength = 2; 
                }    
            } 
            for (int k = 3; k <= s.length(); ++k) { 
                for (int i = 0; i < s.length() - k + 1; ++i) { 
                    int j = i + k - 1; 
                    if (table[i + 1][j - 1] && s[i] == s[j]) { 
                        table[i][j] = true; 
                        if (k > maxLength) { 
                            start = i; 
                            maxLength = k; 
                        }    
                    } 
                } 
            }
            for(int i = start; i <= start+maxLength-1; i++)
                ans.push_back(s[i]);
        }
        return ans;
    }
};