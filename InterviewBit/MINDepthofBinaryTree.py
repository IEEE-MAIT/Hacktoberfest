# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param A : root node of tree
    # @return an integer
    def minDepth(self, A):
        if A is None:
            return 0
            
        
        if A.left==None and A.right==None:
            return 1
            
        if A.left==None:
            return self.minDepth(A.right)+1
        if A.right==None:
            return self.minDepth(A.left)+1
        return 1 + min(self.minDepth(A.left),self.minDepth(A.right))
        
