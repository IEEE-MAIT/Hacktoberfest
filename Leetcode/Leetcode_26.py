# 26. Remove Duplicates from Sorted Array

# Problem -Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.

# Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

# Example 1:
# Given nums = [1,1,2],
# Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.
# It doesn't matter what you leave beyond the returned length.


class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if len(nums) == 0: return 0
        if len(nums) == 1: return 1
        
        # nums = [0,0,1,1,1,2,2,3,3,4]
        j = 1 # slover pointer, only move when meet unique number
        for i in range(1, len(nums)): # faster pointer, i will iterate over all element in nums
            if nums[i] != nums[i-1]: # when nums[i] is a unique number, assign it to nums[j]
                nums[j] = nums[i]
                j += 1
        # After for loop, i = 9, j = 5, nums = [0, 1, 2, 3, 4, 2, 2, 3, 3, 4]
        # We have to delete duplicates backwards
        for delete_index in range(i, j-1, -1):
            del nums[delete_index]
        return j