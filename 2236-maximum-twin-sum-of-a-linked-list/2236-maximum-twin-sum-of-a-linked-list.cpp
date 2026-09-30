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
    int pairSum(ListNode* head) {
        ListNode* head2 = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            head2 = new ListNode(curr->val, head2);
            curr = curr->next;
        }

        int maxSum = INT_MIN;

        while (head != nullptr && head2 != nullptr) {
            int sum = head->val + head2->val;
            maxSum = max(maxSum, sum);

            head = head->next;
            head2 = head2->next;
        }

        return maxSum;
    }
};