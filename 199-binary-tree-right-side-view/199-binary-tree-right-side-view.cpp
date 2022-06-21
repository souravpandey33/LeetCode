/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        set<int> s;
        check(root,ans,s,0);
        return ans;
    }
    
    void check(TreeNode* root, vector<int> &ans, set<int> &s, int curr)
    {
        if(root==NULL)
            return;
        
        if(s.find(curr)==s.end())
        {
            s.insert(curr);
            ans.push_back(root->val);
        }
        check(root->right,ans,s,curr+1);
        check(root->left,ans,s,curr+1);
    }
    
};