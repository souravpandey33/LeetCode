class Solution {
public:
    static bool sortcol(const vector<int>& v1, const vector<int>& v2)
    {
        return v1[1]<v2[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),sortcol);
        int curr=points[0][1];
        int ans=1;
        
        for(int j=1;j<points.size();j++)
        {
            if(points[j][0]>curr)
            {
                curr=points[j][1];
                ans++;
            }
        }
        return ans;
    }
};