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
        ListNode* curr = head;
        int count = 0;
        while(curr != NULL){
            count++;
            curr = curr->next;
        }
        curr = head;
        int pos = count - n;
        while(pos > 1){
            curr = curr->next;
            pos--;
        }
        if(pos == 0){
            return head->next;
        }
        curr->next = curr->next->next;
        return head;
    }
};