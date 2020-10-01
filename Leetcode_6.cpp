/*
ZigZag Conversion (medium)

- The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);

Example 1:
Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"

Example 2:
Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:

P     I    N
A   L S  I G
Y A   H R
P     I

*/
class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.length();
        string ans;
        int tie1 = (numRows-1)*2;
        if(numRows >= s.length() || numRows <= 1)
            return s;
        for(int i = 0; i < numRows; ++i){
            int con = i;
            while(con < n){
                ans.push_back(s[con]);
                if(i > 0 && i < numRows-1){
                    int tie2 = (numRows - i - 1)*2;
                    if(con+tie2 < n)
                        ans.push_back(s[con+tie2]);
                }
                con += tie1;
            }
        }
        return ans;
    }
};