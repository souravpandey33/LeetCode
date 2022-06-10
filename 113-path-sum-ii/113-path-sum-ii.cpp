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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> grp;
        check(root,0,targetSum,ans,grp);
        return ans;
    }
    
    void check(TreeNode* root, int curr, int target, vector<vector<int>> &ans,vector<int> &grp)
    {
        if(root==NULL)
            return;
        grp.push_back(root->val);
        check(root->left,curr+root->val,target,ans,grp);
        check(root->right,curr+root->val,target,ans,grp);
        if(root->left==NULL && root->right==NULL && curr+root->val==target)
        {
            ans.push_back(grp);
        }
        grp.pop_back();
    }
};