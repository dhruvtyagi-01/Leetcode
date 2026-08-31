class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> s;
        vector<int> right(n);
        vector<int> left(n);

        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }

            if (s.empty()) {
                right[i] = n;
            } else {
                right[i] = s.top();
            }

            s.push(i);
        }

        while(!s.empty()) {
            s.pop();
        }

        for (int i = 0; i < n; i++) {
            while (!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }

            if (s.empty()) {
                left[i] = -1;
            } else {
                left[i] = s.top();
            }

            s.push(i);
        }

        int area = 0, ans = INT_MIN;

        for(int i = 0; i < n; i++) {
            area = heights[i] * (right[i] - left[i] - 1);
            ans = max(ans, area);
        }

        return ans;
    }
};