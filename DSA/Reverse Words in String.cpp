class Solution {
public:
    string reverseWords(string s) {
        string result = "", word = "";
        int i = s.length() - 1;

        while (i >= 0) {
            if (s[i] != ' ') {
                word = s[i] + word;
            } else if (!word.empty()) {
                result += word + " ";
                word = "";
            }
            i--;
        }


        if (word.length()>0) {
            result += word;
        } else if (result.length()>0 && result.back() == ' ') {
            result.pop_back();
        }

        return result;
    }
};
