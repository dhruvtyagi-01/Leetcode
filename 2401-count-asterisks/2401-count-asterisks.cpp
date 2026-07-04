class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        bool inside = false;

        for(char ch : s) {
            if(ch == '|') {
                inside = !inside;
            } else if(ch == '*') {
                if(!inside) {
                    count++;
                }
            }
        }

        return count;
    }
};