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
        ListNode* p1=new ListNode();
        ListNode* p2=new ListNode();
        ListNode* ptr1=p1;
        ListNode* ptr2=p2;
        ListNode* temp=head;
        
        while(temp)
        {
            if(temp->val<x)
            {
                p1->next=temp;
                p1=p1->next;
            }
            else
            {
                p2->next=temp;
                p2=p2->next;
            }
            temp=temp->next;
        }
        p2->next=NULL;
        p1->next=ptr2->next;
        
        return ptr1->next;
    }
};