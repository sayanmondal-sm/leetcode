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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL;
        ListNode* tail = NULL;
        int carry = 0;
        if(l1 == NULL && l2 == NULL){
            return NULL;
        }
        while(l1 != NULL || l2 != NULL || carry != 0){
             int digit1 = 0;
            int digit2 = 0;
            if(l1 != NULL){
            digit1 = l1->val;
            l1 = l1->next;
            }
           if(l2 != NULL){
            digit2 = l2->val;
            l2 = l2->next;
           }
        int digit = digit1 + digit2 + carry;
        int num = digit % 10;
        carry =digit / 10;
        ListNode* newnode = new ListNode(num);
        if(head == NULL){
            head = tail = newnode;
        }else{
            tail->next = newnode;
            tail = newnode;
        }
     }
     return head;
    }
};