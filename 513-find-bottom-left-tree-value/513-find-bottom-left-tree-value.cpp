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
    int ans=0;
    int d=0;
    int findBottomLeftValue(TreeNode* root) {
        check(root,0);
        return ans;
    }
    
    void check(TreeNode* root, int depth)
    {
        if(root==NULL)
            return;
        check(root->left,depth+1);
        check(root->right,depth+1);
        
        if(root->left==NULL && root->right==NULL)
        {
            if(d<depth || depth==0)
            {
                d=depth;
                ans=root->val;
            }
        }
    }
};