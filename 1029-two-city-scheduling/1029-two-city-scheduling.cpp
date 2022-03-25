class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n=costs.size();
        int total=0;
        vector<int> less;
        for(int i=0;i<n;i++)
        {
            total=total+costs[i][0];
            int d=costs[i][1]-costs[i][0];
            less.push_back(d);
        }
        sort(less.begin(),less.end());
        for(int i=0;i<n/2;i++)
        {
            total=total+less[i];
        }
        return total;
    }
};