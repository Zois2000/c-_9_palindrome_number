class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x % 10 == 0 && x != 0) return false;

        int reversed_halve_x = 0;

        while (x > reversed_halve_x) {
            int digit = x % 10;
            reversed_halve_x = reversed_halve_x * 10 + digit;
            x = x / 10;
        }

        if (x == reversed_halve_x || x == reversed_halve_x / 10) {
            return true;
        } else {
            return false;
        }
    }
};