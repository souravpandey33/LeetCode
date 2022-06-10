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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> tree1;
        vector<int> tree2;
        check(root1,tree1);
        check(root2,tree2);
        return (tree1==tree2);
    }
    
    void check(TreeNode* root,vector<int> &leaf)
    {
        if(root==NULL)
            return;
        
        check(root->left,leaf);
        check(root->right,leaf);
        
        if(root->left==NULL && root->right==NULL)
        {
            leaf.push_back(root->val);
        }
    }
};