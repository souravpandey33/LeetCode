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

// DFS recursive solution

// class Solution {
// public:
//     int minDepth(TreeNode* root) {
//         if(root==NULL)
//             return 0;
//         if(root->right==NULL)
//             return 1+minDepth(root->left);
//         else if(root->left==NULL)
//             return 1+minDepth(root->right);
//         else
//             return 1+min(minDepth(root->right),minDepth(root->left));
//     }
// };



// BFS iterative solution

class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        queue<TreeNode*> q;
        q.push(root);
        int depth=0;
        while(!q.empty())
        {
            int n=q.size();
            while(n--)
            {
                TreeNode* temp=q.front();
                q.pop();
                if(!temp->right && !temp->left)
                    return 1+depth;
                if(temp->right)
                    q.push(temp->right);
                if(temp->left)
                    q.push(temp->left);
            }
            depth++;
        }
        return depth+1;
    }
};