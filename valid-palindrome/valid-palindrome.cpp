class Solution {
public:
    bool isPalindrome(std::string s) {
        for (int i = 0, j = s.length() - 1; i < j; i++, j--) {
            while (!std::isalpha(s[i]) && !std::isdigit(s[i]) && i < j) {
                i++;
            }
            while (!std::isalpha(s[j]) && !std::isdigit(s[j]) && i < j) {
                j--;
            }
            if (std::tolower(s[i]) != std::tolower(s[j])) {
                return false;
            }
        }

        return true;
    }
};
