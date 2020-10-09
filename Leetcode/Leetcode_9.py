# 9. Palindrome Number

# Problem- Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.
# Follow up: Could you solve it without converting the integer to a string?
# Example 1:
# Input: x = 121
# Output: true

# Example 2:
# Input: x = -121
# Output: false
# Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

class Solution:
    def isPalindrome(self, x: int) -> bool:
        rev = 0
        temp = x
        while(x>0):
            dig = x%10
            rev = rev*10 + dig
            x = x//10
        if temp==rev:
            return True
        else:
            return False