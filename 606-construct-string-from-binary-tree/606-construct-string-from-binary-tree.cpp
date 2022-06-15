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
    string s="";
    string tree2str(TreeNode* root) {
        if(root==NULL)
            return "";
        s=s+to_string(root->val);
        if(root->left)
        {
            s=s+'(';
            tree2str(root->left);
            s=s+')';
        }
        if(root->right)
        {
            if(!root->left)
                s=s+"()";
            s=s+'(';
            tree2str(root->right);
            s=s+')';
        }
        return s;
    }
};