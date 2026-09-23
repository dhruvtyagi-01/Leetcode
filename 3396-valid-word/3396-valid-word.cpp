class Solution {
public:
    bool isValid(string word) {
        if (word.length() < 3) {
            return false;
        }

        bool v = false, c = false;

        for (char ch : word) {
            if (!isalnum(ch)) {
                return false;
            }

            if (isalpha(ch)) {
                ch = tolower(ch);

                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    v = true;
                } else {
                    c = true;
                }
            }
        }

        return v && c;
    }
};