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
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        ListNode* curr=head;
        ListNode* ptr;
        ListNode* prev=NULL;
        int c=0;
        while(curr!=NULL && count>=k && c<k)
        {
            ptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=ptr;
            c++;
        }
        if( c<k){
            prev= curr;
            curr=curr->next;
        }
        if(ptr!=NULL && c>=k)
        {
            head->next=reverseKGroup(ptr,k);
        }
        return prev;
    }
};