
class Solution {
public:
    bool isFreqSame(int a[26], int b[26]) {
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i]) return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int s1len = s1.length();
        int s2len = s2.length();

        if (s1len > s2len) return false;

        int freq[26] = {0};
        int windowfreq[26] = {0};

        for (int i = 0; i < s1len; i++) {
            freq[s1[i] - 'a']++;
            windowfreq[s2[i] - 'a']++;
        }

        if (isFreqSame(freq, windowfreq)) return true;

        for (int i = s1len; i < s2len; i++) {
            windowfreq[s2[i] - 'a']++;
            windowfreq[s2[i - s1len] - 'a']--;
            if (isFreqSame(freq, windowfreq)) return true;
        }

        return false;
    }
};
