class Solution {
public:
    void check(vector<int> &candidates,int target,int curr,vector<vector<int>> &result,vector<int> &combi)
    {
        if(curr==candidates.size())
        {
            if(target==0)
            {
                result.push_back(combi);
            }
            return ;
        }
        if(candidates[curr]<=target)
        {
            combi.push_back(candidates[curr]);
            check(candidates,target-candidates[curr],curr,result,combi);
            combi.pop_back();
        }
        check(candidates,target,curr+1,result,combi);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int curr=0;
        vector<vector<int>> result;
        vector<int> combi;
        check(candidates,target,curr,result,combi);
        return result;
    }
};