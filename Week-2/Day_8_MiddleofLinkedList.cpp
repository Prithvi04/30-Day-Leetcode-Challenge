/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    //Simple problem that uses LL traversal
    ListNode* middleNode(ListNode* head) {
         if(head==NULL|| head->next==NULL)
            return head;
        ListNode* slow=head;
        ListNode* fast =head;
        while(fast!=NULL&& fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
       
        return slow;
        
    }
};