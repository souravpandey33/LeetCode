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
    int min=-1;
    int min2=-1;
    int flag=0;
    int findSecondMinimumValue(TreeNode* root) {
        check(root);
        cout<<min<<" "<<min2;
        if(flag==0)
            return -1;
        return min2;
    }
    void check(TreeNode* root)
    {
        if(root==NULL)
            return;
        check(root->left);
        check(root->right);
        
        if(min==-1)
        {
            min=root->val;
        }
        else if(min>root->val)
        {
            min2=min;
            min=root->val;
            flag=1;
        }
        else if(min<root->val && min2>root->val || min<root->val && min2==-1)
        {
            min2=root->val;
            flag=1;
        }
        // else if(min<root->val && min2==-1)
    }
};