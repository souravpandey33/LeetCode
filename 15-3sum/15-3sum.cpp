class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n < 3)
            return result;
        if(n == 3)
        {
            if(nums[0] + nums[1] + nums[2] == 0)
            {
                result.push_back({nums[0], nums[1], nums[2]});
                return result;
            }
            else
                return result;
        }
        for(int i=0;i<n;i++)
        {
            vector<int> v;
            
            if(i>0 && nums[i]==nums[i-1])
                continue;
            
            int j=i+1;
            int k=n-1;
            
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {   
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(nums[k]);
                    
                    result.push_back(v);
                    v.clear();
                    j=j+1;
                    
                    while(j<k && nums[j]==nums[j-1])
                    {
                        j=j+1;
                    }
                }
                else 
                    if(nums[i]+nums[j]+nums[k]<0)
                    {
                        j=j+1;
                    }
                    else
                    {
                        k=k-1;
                    }
            }   
            
        }
        return result;
    }
};