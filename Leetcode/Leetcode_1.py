# 1. Two Sum

# Problem - Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
# You may assume that each input would have exactly one solution, and you may not use the same element twice.You can return the answer in any order.

# Example 1:
# Input: nums = [2,7,11,15], target = 9
# Output: [0,1]
# Output: Because nums[0] + nums[1] == 9, we return [0, 1].

# Example 2:
# Input: nums = [3,2,4], target = 6
# Output: [1,2]


#Solution approach - create a dictionary that stores the complement of the element of the array and the index of element. 
#iterate over the array and find if the complement is present in the dictionary and return the index

class Solution:
    def twoSum(self, nums: List[int], target: int):
        n = len(nums)
        complemap = dict()
        for i in range(n):
            num = nums[i]
            complement = target - num
            if num in complemap:
                return [complemap[num],i]
            else:
                complemap[complement] = i