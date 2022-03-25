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
        if(head==NULL || head->next==NULL)
           return head;
        ListNode* temp=head;
        int c=1;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            c++;
        }
        int x=k%c;
        cout<<x;
        ListNode* ptr;
        ListNode* help;
        while(x>0)
        {
            temp=head;
            ptr=head;
            temp=temp->next;
            while(temp->next!=NULL)
            {
                ptr=ptr->next;
                temp=temp->next;
            }
            help=temp;
            ptr->next=temp->next;
            help->next=head;
            head=help;
            x--;
        }
        return head;
    }
};