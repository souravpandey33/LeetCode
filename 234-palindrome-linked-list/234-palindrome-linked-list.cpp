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
    ListNode* rev(ListNode* head)
    {
        ListNode* prev=NULL;
        ListNode* next=NULL;
        
        while(head!=NULL)
        {
            next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        slow->next=rev(slow->next);
        slow=slow->next;
        
        while(slow!=NULL)
        {
            if(slow->val!=head->val)
                return false;
            head=head->next;
            slow=slow->next;
        }
        
        return true;
        
    }
};