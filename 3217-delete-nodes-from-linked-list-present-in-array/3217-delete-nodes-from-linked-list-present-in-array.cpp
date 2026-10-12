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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
       set<int>s;
       for(int i=0; i<nums.size(); i++){
        s.insert(nums[i]);
       }

       ListNode* curr = head;

       while(curr->next != NULL){
        if(s.find(curr->next->val) != s.end()){
            curr->next = curr->next->next;
        }else{
            curr = curr->next;
        }
       } 
       if(head != NULL && s.find(head->val) != s.end()){
        head = head->next;
       }
       return head;  
    }
};