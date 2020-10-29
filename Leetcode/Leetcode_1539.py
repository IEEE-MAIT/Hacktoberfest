class Solution:
    def findKthPositive(self, arr: List[int], k: int) -> int:
        i=1
        c=0
        while i>0:
            if i not in arr:
                c+=1
                if c==k:
                    break
            i+=1
        return i