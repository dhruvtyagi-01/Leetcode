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

        k = k % size;

        if (k == 0) {
            return head;
        }

        curr = head;

        while (curr->next != nullptr) {
            curr = curr->next;
        }

        curr->next = head;
        curr = head;

        int count = size - k - 1;

        while (count != 0) {
            curr = curr->next;
            count--;
        }

        ListNode* newHead = curr->next;
        head = newHead;
        curr->next = nullptr;
        
        return head;
    }
};