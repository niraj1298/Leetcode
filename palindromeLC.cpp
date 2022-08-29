//Given an integer x, return true if x is palindrome integer.
//https://leetcode.com/problems/palindrome-number/
//Niraj Nepal

class Solution {
public:
    bool isPalindrome(int x) {
        int result = 0, temp;
        if (x < 0) return false;
        temp = x;
        while (temp) {
            int digit = temp % 10;
            temp = temp / 10;
            if (result > ((numeric_limits<int>::max() - digit) / 10)) {
                return false;
            }
            result = 10 * result + digit;
        }
        return result == x;
    }
};
