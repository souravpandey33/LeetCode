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
    int sumNumbers(TreeNode* root) {
        int ans=0;
        check(root,ans,0);
        return ans;
    }
    
    void check(TreeNode* root, int &ans, int curr)
    {
        if(root==NULL)
            return;
        check(root->left,ans,(curr*10)+root->val);
        check(root->right,ans,(curr*10)+root->val);
        
        if(root->left==NULL && root->right==NULL)
            ans=ans+((curr*10)+root->val);
    }
    
};