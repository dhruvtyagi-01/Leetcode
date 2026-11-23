class Solution {
public:
    char findTheDifference(std::string& s, std::string& t) {
        int sum = 0;

        for (char c : s) {
            sum -= c;
        }

        for (char c : t) {
            sum += c;
        }
        
        return (char)sum;
    }
};