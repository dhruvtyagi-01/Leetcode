class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> value = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int sum = 0;
        int pre = 0;

        for (int i = 0; i < s.length(); i++) {
            int current = value[s[i]];

            if (current > pre) {
                sum += current - 2 * pre;
            } else {
                sum += current;
            }

            pre = current;
        }

        return sum;
    }
};