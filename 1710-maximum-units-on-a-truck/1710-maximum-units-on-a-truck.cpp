class Solution {
public:
    static bool cmp(vector<int>& v1,vector<int> &v2)
    {
        return v1[1]>v2[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        
        int count=0;
        int ans=0;
        
        for(int i=0;i<boxTypes.size();i++)
        {
            int remain=truckSize-count;
            int curr_unit=boxTypes[i][1];
            int no_box=boxTypes[i][0];
            cout<<no_box<<"  "<<remain<<endl;
            if(no_box<remain)
            {
                count=count+no_box;
                ans=ans+(no_box*curr_unit);
            }
            else
            {
                count=count+remain;
                ans=ans+(remain*curr_unit);
                break;
            }
        }
        return ans;
    }
};