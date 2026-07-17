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
    ListNode* deleteDuplicates(ListNode* head) {
        while (head != nullptr && head->next != nullptr &&
               head->val == head->next->val) {

            int dup = head->val;
            while (head != nullptr && head->val == dup) {
                head = head->next;
            }
        }

        if (head == nullptr)
            return nullptr;

        ListNode* prev = head;
        ListNode* curr = head->next;

        while (curr != nullptr) {
            if (curr->next != nullptr && curr->val == curr->next->val) {
                int dup = curr->val;

                while (curr != nullptr && curr->val == dup) {
                    curr = curr->next;
                }

                prev->next = curr;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }

        return head;
    }
};