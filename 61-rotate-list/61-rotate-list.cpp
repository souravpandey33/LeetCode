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
        if(k==0)
            return head;
        if(head==NULL)
            return head;
        ListNode* ptr=head;
        int c=0;
        while(ptr)
        {
            ptr=ptr->next;
            c++;
        }
        k=k%c;
        
        ptr=head;
        int diff=c-k-1;
        cout<<c<<" "<<k<<endl;
        while(diff--)
        {
            cout<<ptr->val<<" "; 
            ptr=ptr->next;
        }
        
        ListNode* start=ptr->next;
        // cout<<start->val;
        ptr->next=NULL;
        
        ListNode* temp=start;
        
        while(temp && temp->next!=NULL)
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