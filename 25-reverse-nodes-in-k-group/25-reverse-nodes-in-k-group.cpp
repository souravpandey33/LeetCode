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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==0 || k==1)
            return head;
        ListNode* temp=head;
        int c=k;
        while(c--)
        {
            if(temp==NULL)
                return head;
            temp=temp->next;
        }
        
        c=k;
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* ptr;
        
        while(curr && c)
        {
            ptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=ptr;
            c--;
        }
        
        if(ptr)
        {
            head->next=reverseKGroup(ptr,k);
        }
        
        return prev;
    }
};