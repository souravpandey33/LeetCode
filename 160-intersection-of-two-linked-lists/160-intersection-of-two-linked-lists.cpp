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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        
        int ca=0;
        int cb=0;
        
        while(tempA)
        {
            ca++;
            tempA=tempA->next;
        }
        
        while(tempB)
        {
            cb++;
            tempB=tempB->next;
        }
        
        int diff=0;
        
        if(ca>cb)
        {
            diff=ca-cb;
            while(diff--)
            {
                headA=headA->next;
            }
        }
        else
        {
            diff=cb-ca;
            while(diff--)
            {
                headB=headB->next;
            }
        }
        
        while(headA && headB)
        {
            if(headA==headB)
            {
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        
        return NULL;
    }
};