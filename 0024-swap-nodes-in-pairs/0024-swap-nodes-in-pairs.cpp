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
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* temp = head;
        ListNode* prev = NULL;

        while (temp != NULL && temp->next != NULL) {

            ListNode* x = temp;
            ListNode* y = temp->next;

            x->next = y->next;
            y->next = x;

            if (prev != NULL) {
                prev->next = y;
            }
            else {
                head = y;
            }

            prev = x;
            temp = x->next;
        }

        return head;
    }
};