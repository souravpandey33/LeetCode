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
    ListNode* swapNodes(ListNode* head, int k) {
        int val=0;
        ListNode *temp=head;
        ListNode *ptr=head;
        ListNode *first=NULL;
        int n=k;
        if(head->next==NULL)
            return head;
        while(k>1)
        {
            temp=temp->next;
            k--;
        }
        val=temp->val;
        first=temp;
        temp=temp->next;
        while(temp)
        {
            temp=temp->next;
            ptr=ptr->next;
        }
        cout<<first->val<<" "<<ptr->val;
        first->val=ptr->val;
        ptr->val=val;
        return head;
    }
};