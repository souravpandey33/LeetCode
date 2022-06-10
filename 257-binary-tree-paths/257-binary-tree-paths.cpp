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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        check(root,ans,"");
        return ans;
    }
    
    void check(TreeNode* root, vector<string> &ans, string st)
    {
        if(root==NULL)
            return;
        st=st+to_string(root->val)+"->";
        check(root->left,ans,st);
        check(root->right,ans,st);
        if(root->left==NULL && root->right==NULL)
        {
            if(st[st.length()-1]=='>')
            {
                st.pop_back();
                st.pop_back();
            }
            ans.push_back(st);
        }
    }
};