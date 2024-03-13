class Solution {
public:
    bool isPalindrome(int x) {
        // Special cases:
        // 1. Negative numbers are not palindromes
        // 2. Numbers ending with zero are not palindromes unless it's zero itself
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        
        int reversed = 0;
        while (x > reversed) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        
        // If the length of the number is odd, we can ignore the middle digit
        return x == reversed || x == reversed / 10;
    }
};
