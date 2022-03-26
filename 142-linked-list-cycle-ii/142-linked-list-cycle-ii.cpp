/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        if(head==NULL || head->next==NULL)
            return NULL;
        int count=-1;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                
                slow=head;
                while(slow!=fast)
                {
                    count++;
                    slow=slow->next;
                    fast=fast->next;
                }
                return fast;
                
            }
        }
        return NULL;
    }
};