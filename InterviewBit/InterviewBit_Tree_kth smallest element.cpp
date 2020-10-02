/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int>v; void inored(TreeNode* a);
int Solution::kthsmallest(TreeNode* a, int k)
{
    v.clear();
    inored(a);
     return v[k-1];
}
void inored(TreeNode* a)
{
    if(a==NULL)
    return;
    inored(a->left);
    v.push_back(a->val);
    inored(a->right);
}

