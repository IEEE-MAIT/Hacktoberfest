/* 
Word Search(Medium)

Given a 2D board and a word, find if the word exists in the grid.

The word can be constructed from letters of sequentially adjacent cell, where "adjacent" cells are those horizontally or vertically neighboring. The same letter cell may not be used more than once.

Example:

board =
[
  ['A','B','C','E'],
  ['S','F','C','S'],
  ['A','D','E','E']
]

Given word = "ABCCED", return true.
Given word = "SEE", return true.
Given word = "ABCB", return false.
 

Constraints:

board and word consists only of lowercase and uppercase English letters.
1 <= board.length <= 200
1 <= board[i].length <= 200
1 <= word.length <= 10^3

*/

class Solution {
public:
    bool checkBounds(int i,int j,int r,int c){
        return i>=0 && i<r && j>=0 && j<c;
    }
    
    bool dfs(vector<vector<char>>& board,vector<vector<int>>& visited,string& word,int i,int j,int p,int r,int c){
        if(visited[i][j]) return false;
        visited[i][j] = 1;
        p++;
        if(p == word.length()) return true;
        vector<pair<int,int>>dirs = {{0,1},{0,-1},{1,0},{-1,0}};
        for(auto dir : dirs){
            int ii = i+dir.first, jj=j+dir.second;
            if(checkBounds(ii,jj,r,c) && board[ii][jj] == word[p] && dfs(board,visited,word,ii,jj,p,r,c)){
                return true;
            }
        }
        visited[i][j] = 0;
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int r = board.size();
        int c = board[0].size();
        char s = word[0];
        vector<vector<int>>visited(r,vector<int>(c));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j] == s && dfs(board,visited,word,i,j,0,r,c)) return true;
            }
        }
        return false;
    }
};