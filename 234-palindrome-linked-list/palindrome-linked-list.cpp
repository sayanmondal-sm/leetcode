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
    bool isPalindrome(ListNode* head) {
       if(head == NULL){
        return false;
       }
       vector<int>v;
       ListNode* original = head;
       while(original != NULL){
        v.push_back(original->val);
        original = original->next;
       }
       ListNode* curr = head;
       ListNode* prev = NULL;
       ListNode* next = NULL;

       while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
       }
      ListNode* p1 = prev;
      int i = 0;
      while(p1 != NULL){
        if(p1->val != v[i]){
            return false;
        }
        p1 = p1->next;
        i++;
      }
      return true;
    }
};