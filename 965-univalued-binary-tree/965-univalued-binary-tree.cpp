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
    int ans=1;
    bool isUnivalTree(TreeNode* root) {
        int flag=root->val;
        check(root,flag);
        return ans;
    }
    
    void check(TreeNode* root, int flag)
    {
        if(root==NULL)
            return;
        check(root->left,flag);
        check(root->right,flag);
        
        if(root->val!=flag)
            ans=0;
    }
};