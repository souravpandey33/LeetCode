class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        
        for(auto i:nums)
        {
            s.insert(i);
        }
        
        int ans=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i]-1)==s.end())
            {
                int curr=nums[i];
                int l=1;
                while(s.find(curr+1)!=s.end())
                {
                    curr=curr+1;
                    l=l+1;
                }
                ans=max(ans,l);
            }
        }
        return ans;
    }
};