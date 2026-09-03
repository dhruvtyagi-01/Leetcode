/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> nums;
        ListNode* temp = head;
        while (temp != nullptr) {
            nums.push_back(temp->val);
            temp = temp->next;
        }

        stack<int> s;
        int n = nums.size();
        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && nums[s.top()] <= nums[i]) {
                s.pop();
            }

            if(s.empty()) {
                ans[i] = 0;
            } else {
                ans[i] = nums[s.top()];
            }

            s.push(i);
        }

        return ans;
    }
};