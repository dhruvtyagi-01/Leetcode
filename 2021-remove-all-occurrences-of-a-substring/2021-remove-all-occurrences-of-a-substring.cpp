class Solution {
public:
    string removeOccurrences(string s, string part) {
        for (int i = 0; i < s.length(); i++) {
            if (s.substr(i, part.length()) == part) {
                s.erase(i, part.length());
                i = -1;
            }
        }
        return s;
    }
};