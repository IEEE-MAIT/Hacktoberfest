class Solution:
    # @param A : root node of tree
    # @param B : integer
    # @return a list of list of integers
    def pathSum(self, A, B):
        if A is None:
            return []
        q=[[A,A.val,[A.val]]]
        c=[]
        while q:
            a=q.pop(0)
            if a[0].left==None and a[0].right==None and a[1]==B:
                c.append(a[2])
            if a[0].left:
                q.append([a[0].left,a[1]+a[0].left.val,a[2]+[a[0].left.val]])
            if a[0].right:
                q.append([a[0].right,a[1]+a[0].right.val,a[2]+[a[0].right.val]])
        return c        
