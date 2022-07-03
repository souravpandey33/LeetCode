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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int> mp;
        ListNode* temp=head;
        while(temp)
        {
            mp[temp->val]++;
            temp=temp->next;
        }
        ListNode* ptr=new ListNode();
        ListNode* start=ptr;
        temp=head;
        while(temp)
        {
            if(mp[temp->val]==1)
            {
                ptr->next=new ListNode(temp->val);
                ptr=ptr->next;
            }
            temp=temp->next;
            
        }
        return start->next;
    }
};