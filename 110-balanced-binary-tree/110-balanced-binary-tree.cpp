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
    bool ans=true;
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return ans;
        check(root);
        return ans;
    }
    
    int check(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int l=1+check(root->left);
        int r=1+check(root->right);
        
        if(abs(l-r)>1){
            ans=false;
            exit;
        }
            
        
        return max(l,r);
    }
    
    
};