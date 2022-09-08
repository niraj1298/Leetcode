//my solution for https://leetcode.com/problems/valid-palindrome/submissions/


class Solution {
public:
    bool isPalindrome(string s) {

        string str = s;
        string strr;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] + 32;
            }
            if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9')) {
                strr += str[i];
            }
        }
        int i = 0;
        int j = strr.length() - 1;
        while (i < j) {
            if (strr[i] != strr[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
