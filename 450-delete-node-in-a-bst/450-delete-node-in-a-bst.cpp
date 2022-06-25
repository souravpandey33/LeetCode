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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
            return NULL;
        if(root->val > key)
            root->left=deleteNode(root->left,key);
        else if(root->val < key)
        {
            root->right=deleteNode(root->right,key);
        }
        else
        {
            if(root->left==NULL && root->right==NULL)
            {
                root=NULL;
                return root;
            }
            if(root->right==NULL || root->left==NULL)
            {
                if(root->right)
                {
                    root=root->right;
                }
                else
                {
                    root=root->left;
                }
                return root;
            }
            
            
            TreeNode* temp=findLeft(root->right);
            
            int value=root->val;
            root->val=temp->val;
            temp->val=value;
            
            root->right=deleteNode(root->right,key);
            return root;
        }
        return root;
    }
    
    TreeNode* findLeft(TreeNode* root)
    {
        while(root->left!=NULL)
            root=root->left;
        return root;
    }
};