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
        check(root,ans,grp,0,targetSum);
        return ans;
    }
    
    void check(TreeNode* root, vector<vector<int>> &ans, vector<int> &grp, int curr, int targetSum)
    {
        if(root==NULL)
            return;
        grp.push_back(root->val);
        check(root->left,ans,grp,curr+root->val,targetSum);
        check(root->right,ans,grp,curr+root->val,targetSum);
        
        if(root->left==NULL && root->right==NULL && curr+root->val==targetSum)
        {
            ans.push_back(grp);
        }
        grp.pop_back();
    }
};