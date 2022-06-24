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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* merge=new ListNode(0);
        ListNode* ptr=merge;
        while(list1 && list2)
        {
            if(list1->val <= list2->val)
            {
                merge->next=list1;
                list1=list1->next;
            }
            else
            {
                merge->next=list2;
                list2=list2->next;
            }
            merge=merge->next;
        }
        while(list1)
        {
            merge->next=list1;
            merge=merge->next;
            list1=list1->next;
        }
        while(list2)
        {
            merge->next=list2;
            merge=merge->next;
            list2=list2->next;
        }
        return ptr->next;
    }
};