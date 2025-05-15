
class Solution {
public:
    bool isPalindrome(string s) {
       // transform(s.begin(), s.end(), s.begin(), ::tolower);
        string sa = "";

        for (int i = 0; i < s.length(); i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
                sa += s[i];
            }
        }

        if (sa.empty()) return true;

        int i = 0;
        int len = sa.length() - 1;
        while (sa[i] == sa[len] && i < len) {
            i++;
            len--;
        }

        if (i >= len) return true;
        else return false;
    }
};
