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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        vector<int> all;
        for(int i=0;i<n;i++)
        {
            while(lists[i])
            {
                all.push_back(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        sort(all.begin(),all.end());
        ListNode* temp=new ListNode;
        ListNode* ptr=temp;
        for(int i=0;i<all.size();i++)
        {
            temp->next=new ListNode(all[i]);
            temp=temp->next;
        }
        return ptr->next;
    }
};