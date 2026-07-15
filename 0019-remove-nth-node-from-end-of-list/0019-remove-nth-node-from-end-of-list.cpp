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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* temp = head;
        while(temp != nullptr) {
            temp = temp->next;
            size++;
        }

        if(n == size) {
            return head->next;
        }

        int range = size - n;
        temp = head;
        for(int i = 1; i < range; i++) {
            temp = temp->next;
        }

        temp->next = temp->next->next;

        return head;
    }
};