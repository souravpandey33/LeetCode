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
        int countA=0;
        int countB=0;
        while(tempA)
        {
            countA++;
            tempA=tempA->next;
        }
        while(tempB)
        {
            countB++;
            tempB=tempB->next;
        }
        tempA=headA;
        tempB=headB;
        int diff;
        if(countA>countB)
        {
            diff=countA-countB;
            while(diff>0)
            {
                tempA=tempA->next;
                diff--;
            }
        }
        else
        {
            diff=countB-countA;
            while(diff>0)
            {
                tempB=tempB->next;
                diff--;
            }
        }
        while(tempA && tempB)
        {
            if(tempA==tempB)
                return tempA;
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return NULL;
    }
};