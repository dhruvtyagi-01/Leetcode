class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(int ch : letters) {
            if(ch > target) {
                return ch;
            }
        }

        return letters[0];
    }
};