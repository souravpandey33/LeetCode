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
    bool ans=false;
    bool hasPathSum(TreeNode* root, int targetSum) {
        check(root,0,targetSum);
        return ans;
    }
    
    void check(TreeNode* root, int curr, int targetSum)
    {
        if(root==NULL)
            return;
        
        check(root->left,curr+root->val,targetSum);
        check(root->right,curr+root->val,targetSum);
        
        if(!root->left && !root->right && curr+root->val==targetSum)
        {
            ans=true;
            exit;
        }
    }
    
};