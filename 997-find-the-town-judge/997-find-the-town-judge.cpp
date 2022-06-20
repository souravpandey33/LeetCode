class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> indeg(n+1,0);
        vector<int> outdeg(n+1,0);
        
        for(int i=0;i<trust.size();i++)
        {
            indeg[trust[i][0]]++;
            outdeg[trust[i][1]]++;
        }
        
        for(int i=1;i<=n;i++)
        {
            if(indeg[i]==0 && outdeg[i]==n-1)
                return i;
        }
        return -1;
    }
};