class Solution {
public:
    void check(vector<int> &candidates, int target, int curr, vector<vector<int>> &ans, vector<int> &combi)
    {
        if(target==0)
        {
            ans.push_back(combi);
            return;
        }
        
        for(int i=curr;i<candidates.size();i++)
        {
            if(i>curr && candidates[i]==candidates[i-1])
                continue;
            if(candidates[i]<=target)
            {
                combi.push_back(candidates[i]);
                check(candidates,target-candidates[i],i+1,ans,combi);
                combi.pop_back();
            }
        }
    }
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combi;
        sort(candidates.begin(),candidates.end());
        check(candidates,target,0,ans,combi);
        return ans;
    }
};