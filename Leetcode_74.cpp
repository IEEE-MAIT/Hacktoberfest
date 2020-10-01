// a recursive O(m+n) solution for search in matrix

#include<bits/stdc++.h>
using namespace std;
bool find(vector<vector<int>>& matrix, int target,int i, int j)
    {   bool f1=false,f2=false;
        if(i>matrix.size()-1||i<0||j>matrix[0].size()||j<0)
            return false;
        if(matrix[i][j]==target)
            return true;
        if(matrix[i][j]>target)
             f1=find(matrix,target,i,j-1);
        else
             f2=find(matrix,target,i+1,j);
        return f1||f2;

    }
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0)
            return false;
        return find(matrix,target,0,matrix[0].size()-1);

    }

// driver code
int main()
{
  cout<<"enter R and C"<<endl;
  int R,C;
  cin>>R>>C;
  cout<<"Enter elements"<<endl;
  vector<int> row;
  vector<vector<int> > matrix;
  int x;
  for(int i=0;i<R;i++)
  {
    for(int j=0;j<C;j++)
    {
      cin>>x;
      row.push_back(x);
    }
    matrix.push_back(row);
    row.clear();
  }
  cout<<"Enter element to be searched"<<endl;
  int target;
  cin>>target;
  cout<<searchMatrix(matrix, target)<<endl;
}
