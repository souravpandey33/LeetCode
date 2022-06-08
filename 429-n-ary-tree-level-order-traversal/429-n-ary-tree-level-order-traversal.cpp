/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        queue<Node*> q;
        q.push(root);
        vector<int> sol;
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                Node* temp=q.front();
                q.pop();
                sol.push_back(temp->val);
                for(auto ptr:temp->children)
                {
                    if(ptr)
                        q.push(ptr);
                }
            }
            ans.push_back(sol);
            sol.clear();
        }
        return ans;
    }
};