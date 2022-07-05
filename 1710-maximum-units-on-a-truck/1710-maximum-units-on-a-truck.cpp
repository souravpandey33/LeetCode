class Solution {
public:
    static bool cmp(vector<int>& v1,vector<int> &v2)
    {
        return v1[1]>v2[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        
        int ans=0;
        
        for(int i=0;i<boxTypes.size();i++)
        {
            int curr_unit=boxTypes[i][1];
            int no_box=boxTypes[i][0];
            if(no_box<truckSize)
            {
                truckSize-=no_box;
                ans=ans+(no_box*curr_unit);
            }
            else
            {
                ans=ans+(truckSize*curr_unit);
                break;
            }
        }
        return ans;
    }
};