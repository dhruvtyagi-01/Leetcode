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
    ListNode* rotateRight(ListNode* head, int k) {
        int size = 0;

        ListNode* curr = head;

        while (curr != nullptr) {
            size++;
            curr = curr->next;
        }

        if (size < 2) {
            return head;
        }

        if(k == 0) {
            return head;
        }

        k = k % size;
        
        while (k != 0) {
            ListNode* curr = head;

            while (curr->next->next != nullptr) {
                curr = curr->next;
            }

            ListNode* newHead = curr->next;
            newHead->next = head;
            head = newHead;
            curr->next = nullptr;
            k--;
        }

        return head;
    }
};