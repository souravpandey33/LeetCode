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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || head==NULL)
            return head;
        
        int c=0;
        ListNode* ptr=head;
        
        while(ptr)
        {
            c++;
            ptr=ptr->next;
        }
        
        k=k%c;
        
        ptr=head;
        
        while(c-k-1)
        {
            ptr=ptr->next;
            k++;
        }
        
        ListNode* start=ptr->next;
        ListNode* temp=start;
        
        ptr->next=NULL;
         
        while(temp && temp->next)
        {
            temp=temp->next;
        }
        
        if(temp==NULL)
            start=head;
        else
            temp->next=head;
        
        return start;
            
    }
};