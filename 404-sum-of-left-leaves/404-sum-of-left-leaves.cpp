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
    int sumOfLeftLeaves(TreeNode* root) {
        int ans=0;
        if(root==NULL)
            return 0;
        check(root,ans,0);
        return ans;
    }
    
    void check(TreeNode* root, int &ans,int flag)
    {
        if(root==NULL)
            return;
        
        check(root->left,ans,1);
        check(root->right,ans,0);
        
        if(root->left==NULL && root->right==NULL && flag==1)
            ans+=root->val;
        
    }
    
};