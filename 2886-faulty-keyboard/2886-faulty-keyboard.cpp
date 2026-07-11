class Solution {
public:
    string finalString(string s) {
        int n = s.length();
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'i') {
                reverse(s.begin(), s.begin() + i);
                s.erase(i, 1);
                i--;
            }
        }

        return s;
    }
};