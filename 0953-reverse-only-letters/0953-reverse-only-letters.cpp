class Solution {
public:
    bool isAlpha(char c) {
        return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    }

    string reverseOnlyLetters(string s) {
        int n = s.size();
        int start = 0, end = n - 1;

        while (start <= end) {
            if (!isAlpha(s[start])) {
                start++;
            } else if (!isAlpha(s[end])) {
                end--;
            } else {
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }

        return s;
    }
};