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
        int i,j;
        if(left==right)
            return head;
        ListNode* temp=head;
        for(i=1;i<right;i++)
        {
            temp=temp->next;
        }
        ListNode* rest=temp->next; // storing the part after sorting part
        temp=head;
        ListNode* font=temp;
        for(i=1;i<left;i++)
        {
            font=temp;          // storing the part after sorting part
            temp=temp->next;
        }
        ListNode* curr=temp;
        ListNode* ptr;
        ListNode* prev=NULL;
        int k=right-left+1;
        while(curr!=NULL && k>0)
        {
            ptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=ptr;
            k--;
        }
        if(left==1)                 // if sorting from first element then directly change head
            head=prev;
        else                        // if not then add after font 
            font->next=prev;
        ptr=head;
        while(ptr->next)
        {
            ptr=ptr->next;
        }
        ptr->next=rest;                // add the remaining part
        return head;
    }
};