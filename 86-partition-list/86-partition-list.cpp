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
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp=head;
        ListNode* ptr1=new ListNode();
        ListNode* ptr2=new ListNode();
        ListNode* part1=ptr1;
        ListNode* part2=ptr2;
        if(head==NULL || head->next==NULL)
            return head;
        while(temp->next!=NULL)
        {
            if(temp->val<x)
            {
                ptr1->next=temp;
                ptr1=ptr1->next;
            }
            else
            {
                ptr2->next=temp;
                ptr2=ptr2->next;
            }
            temp=temp->next;
        }
        
        if(temp->val<x)
        {
            ptr1->next=temp;
            ptr2->next=NULL;
            ptr1->next->next=part2->next;
        }
        else
        {
            ptr2->next=temp;
            ptr2=ptr2->next;
            ptr2->next=NULL;
            ptr1->next=part2->next;
        }
        
        return part1->next;
    }
};