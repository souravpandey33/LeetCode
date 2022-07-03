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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* start=head;
        ListNode* end=head;
        int dumleft=left;
        int diff=right-left+1;
        left--;
        
        ListNode* temp=head;
        while(left--)
        {
            start=temp;
            temp=temp->next;
        }
        
        while(right--)
        {
            end=end->next;
        }
        
        ListNode* curr=temp;
        ListNode* prev=NULL;
        ListNode* ptr;
        
        while(curr && diff)
        {
            ptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=ptr;
            diff--;
        }
        
        if(dumleft==1)
            head=prev;
        else
            start->next=prev;
        
        ptr=head;
        
        while(ptr->next)
        {
            ptr=ptr->next;
        }
        
        ptr->next=end;
        
        return head;
    }
};