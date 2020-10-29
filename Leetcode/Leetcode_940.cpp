/*

Given a string S, count the number of distinct, non-empty subsequences of S .

Since the result may be large, return the answer modulo 10^9 + 7.

Example 1:

Input: "abc"
Output: 7
Explanation: The 7 distinct subsequences are "a", "b", "c", "ab", "ac", "bc", and "abc".
Example 2:

Input: "aba"
Output: 6
Explanation: The 6 distinct subsequences are "a", "b", "ab", "ba", "aa" and "aba".
Example 3:

Input: "aaa"
Output: 3
Explanation: The 3 distinct subsequences are "a", "aa" and "aaa".

Note:

S contains only lowercase letters.
1 <= S.length <= 2000

*/

class Solution {
public:
    int distinctSubseqII(string S) {
        int mod = 1e9 + 7;
	unordered_map<char,int> mp;
	int arr[S.length()+1]={1};
	for(int i=1;i<=S.length();i++){
		arr[i]+=((arr[i-1]%mod)*2)%mod;
		char ch = S[i-1];
		if(mp.count(ch)){
			arr[i]=(arr[i] - (arr[mp[ch]]-mod))%mod;
		}
		mp[ch] = i-1;
	}
	return arr[S.length()]-1;
    }
};