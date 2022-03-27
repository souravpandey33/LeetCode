class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        set<pair<int,int>> s;
        vector<int> ans;
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==1)
                    count++;
            }
            s.insert({count,i});
            count=0;
        }
        for(auto i : s)
        {
            if(k==0)
                break;
            ans.push_back(i.second);
            k--;
        }
        return ans;
    }
};