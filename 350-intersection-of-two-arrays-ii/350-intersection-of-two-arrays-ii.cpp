class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map;
        for(int i=0;i<nums1.size();i++)
        {
            if(map[nums1[i]])
            {
                map[nums1[i]]++;
            }
            else
            {
                map[nums1[i]]=1;
            }
        }
        vector<int> ans;
        for(int i=0;i<nums2.size();i++)
        {
            if(map.find(nums2[i])!=map.end())
            {
                ans.push_back(nums2[i]);
                map[nums2[i]]--;
                if(map[nums2[i]]==0)
                    map.erase(nums2[i]);
            }
        }
        return ans;
    }
};