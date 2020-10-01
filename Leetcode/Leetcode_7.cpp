/*
Reverse Integer (easy)

- Given a 32-bit signed integer, reverse digits of an integer.

Example 1:
Input: 123
Output: 321

Example 2:
Input: -123
Output: -321

Example 3:
Input: 120
Output: 21

*/
class Solution {
public:
    int reverse(int x) {
        long y = 0;
        while(x){
            y = x%10 + y*10;
            x /= 10;
        }
        if (y < INT_MIN || y > INT_MAX){
            return 0;
        } else {
            return (int)y;
        }
    }
};